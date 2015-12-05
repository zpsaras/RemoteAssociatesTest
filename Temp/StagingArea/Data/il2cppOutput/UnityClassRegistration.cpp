struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

}

void RegisterAllClasses()
{
	//Total: 65 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//4. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//5. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//6. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//7. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//8. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//9. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//10. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//11. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//12. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//13. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//14. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//15. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//16. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//17. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//18. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//19. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//20. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//21. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//22. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//23. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//24. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//25. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//26. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//27. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//28. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//29. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//30. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//31. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//32. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//33. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//34. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//35. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//36. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//37. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//38. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//39. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//40. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//41. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//42. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//43. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//44. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//45. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//46. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//47. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//48. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//49. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//50. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//51. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//52. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//53. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//54. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//55. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//56. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//57. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//58. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//59. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//60. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//61. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//62. NetworkManager
	//Skipping NetworkManager

	//63. MasterServerInterface
	//Skipping MasterServerInterface

	//64. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
