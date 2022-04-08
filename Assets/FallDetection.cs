using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FallDetection : MonoBehaviour
{


    void FixedUpdate()
    {
        if (transform.position.y < -3f)
        {
            this.transform.position = new Vector3(0f, 0f, -5f);
        }
    }

}
