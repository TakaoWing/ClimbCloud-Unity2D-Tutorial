﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerContlloer : MonoBehaviour {

	Rigidbody2D rigid2D;
	float jumpForce = 680.0f; // ジャンプする力
	float walkForce = 30.0f; // 歩く力
	float maxWalkSpeed = 2.0f; // 歩く最大のスピード

	void Start () {
		this.rigid2D = GetComponent<Rigidbody2D> ();
	}

	void Update () {

		//ジャンプする
		if (Input.GetKeyDown (KeyCode.Space)) {
			this.rigid2D.AddForce (transform.up * this.jumpForce); // 上方向ベクトルにjapmForceをかける
		}

		// 左右移動
		int key = 0;
		if (Input.GetKey (KeyCode.RightArrow))
			key = 1;
		if (Input.GetKey (KeyCode.LeftArrow))
			key = -1;

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
	}
}
