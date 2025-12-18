Shader "3DS_Skybox" {
    Properties {
        _Tex ("Cubemap Texture", Cube) = "white" {}
    }
    SubShader {
        Tags { "Queue"="Background" }
        Cull Off
        ZWrite Off
        Fog { Mode Off }
        Pass {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma target 2.0
            #include "UnityCG.cginc"

            struct appdata_t {
                float4 vertex : POSITION;
                float3 texcoord : TEXCOORD0;
            };

            struct v2f {
                float4 pos : SV_POSITION;
                float3 texcoord : TEXCOORD0;
            };

            samplerCUBE _Tex;

            v2f vert(appdata_t v) {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.texcoord = v.texcoord;
                return o;
            }

            fixed4 frag(v2f i) : SV_Target {
                // Use half precision
                half3 texCoord = half3(i.texcoord);
                // Using normalize function
                half4 color = texCUBE(_Tex, normalize(texCoord));
                return color;
            }
            ENDCG
        }
    }
    FallBack "Diffuse"
}