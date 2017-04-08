using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerContlloer : MonoBehaviour {

	Rigidbody2D rigid2D;
	Animator animator;
	float jumpForce = 680.0f; // ジャンプする力
	float walkForce = 30.0f; // 歩く力
	float maxWalkSpeed = 2.0f; // 歩く最大のスピード
	float threshold = 0.2f; // 

	void Start () {
		this.rigid2D = GetComponent<Rigidbody2D> ();
		this.animator = GetComponent<Animator> ();
	}

	void Update () {

		//ジャンプする
		if (Input.GetMouseButtonDown (0) && this.rigid2D.velocity.y == 0) {
			this.rigid2D.AddForce (transform.up * this.jumpForce); // 上方向ベクトルにjapmForceをかける
		}

		// 左右移動
		int key = 0;
		/*if (Input.GetKey (KeyCode.RightArrow))
			key = 1;
		if (Input.GetKey (KeyCode.LeftArrow))
			key = -1;*/
		if (Mathf.Abs(Input.acceleration.x) >= this.threshold) {
			if (Input.acceleration.x > this.threshold)
				key = 1;
			if (Input.acceleration.x < this.threshold)
				key = -1;
		}

		//プレイヤの速度
		float speedx = Mathf.Abs(this.rigid2D.velocity.x);

		// スピード制限
		if (speedx < this.maxWalkSpeed) {
			this.rigid2D.AddForce (transform.right * key * this.walkForce);
		}

		// 動く方向に応じて反転
		if (key != 0) {
			transform.localScale = new Vector3(key, 1, 1);
		}

		// プレイヤの速度に応じてアニメーション速度を帰る
		this.animator.speed = speedx / 2.0f;

		if (transform.position.y < -10) {
			SceneManager.LoadScene ("Main");
		}

	}

	//  ゴールに到達
	void OnTriggerEnter2D(Collider2D other){
		// Debug.Log ("ゴール");
		SceneManager.LoadScene ("Clear");
	}
}
