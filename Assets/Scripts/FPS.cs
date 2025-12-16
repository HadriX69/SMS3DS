using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.N3DS;

public class FPS : MonoBehaviour {

	[SerializeField] private float speed = 5f;
	[SerializeField] private Transform cam;
	[SerializeField] private float sensitivity = 2f;
	float h = 0f;
	float v = 0f;

    private CharacterController controller;
	private Vector3 playerVelocity;

    void Start () 
	{
		controller = GetComponent<CharacterController>();

    }
	
	void Update () 
	{
        // Movement input
        if (GamePad.GetButtonHold(N3dsButton.Emulation_Up))
        {
            v = 1f;
        }

        if (GamePad.GetButtonHold(N3dsButton.Emulation_Down))
        {
            v = -1f;
        }

        if (GamePad.GetButtonRelease(N3dsButton.Emulation_Up) || GamePad.GetButtonRelease(N3dsButton.Emulation_Down)) 
		{
            v = 0f;
        }

		if (GamePad.GetButtonHold(N3dsButton.Emulation_Right))
		{
			h = 1f;
        }
        if (GamePad.GetButtonHold(N3dsButton.Emulation_Left))
        {
            h = -1f;
        }
        if (GamePad.GetButtonRelease(N3dsButton.Emulation_Right) || GamePad.GetButtonRelease(N3dsButton.Emulation_Left))
        {
            h = 0f;
        }

        Vector3 move = transform.right * h + transform.forward * v;
		controller.Move(move * speed * Time.deltaTime);

		playerVelocity.y += Physics.gravity.y * Time.deltaTime;
		controller.Move(playerVelocity * Time.deltaTime);

        float mouseX = 0f;
        float mouseY = 0f;

        // Look input
        if (GamePad.GetButtonHold(N3dsButton.Right)) 
		{
            mouseX = 1f * sensitivity;
        }

		if (GamePad.GetButtonHold(N3dsButton.Left)) 
		{
            mouseX = -1f * sensitivity;
        }

		if (GamePad.GetButtonHold(N3dsButton.Up)) 
		{
			mouseY = 1f * sensitivity;
        }

		if (GamePad.GetButtonHold(N3dsButton.Down)) 
		{
            mouseY = -1f * sensitivity;
        }

        transform.Rotate(Vector3.up * mouseX);

		Vector3 currentRotation = cam.rotation.eulerAngles;

		float desiredRotationX = currentRotation.x - mouseY;
		if (desiredRotationX > 180) 
		{
			desiredRotationX -= 360; 
		}

		desiredRotationX = Mathf.Clamp(desiredRotationX, -90f, 90f);
		cam.rotation = Quaternion.Euler(desiredRotationX, currentRotation.y, currentRotation.z);
    }
}
