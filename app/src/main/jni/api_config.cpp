#include <jni.h>
#include <string>

std::string SERVER_URL          = "https://jumcoders.xyz/v139c/rest-api/";
std::string API_KEY             = "c1c6ba9e0b431ec";
std::string PURCHASE_CODE       = "NullJungle.com";
std::string ONESIGNAL_APP_ID    = "b695f2e3-ab75-4ee0-ba40-2269f6f81c65";
std::string YOUTUBE_API_KEY     = "AIzaSyBXzav06fp67HigovuZ5YuP82-ZeZZGEAQ";
std::string TERMS_URL           = "https://jumcoders.xyz/v139c/terms/";


//WARNING: ==>> Don't change anything below.
extern "C" JNIEXPORT jstring JNICALL
Java_com_code_files_AppConfig_getApiServerUrl(
        JNIEnv* env,
        jclass clazz) {
    return env->NewStringUTF(SERVER_URL.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_code_files_AppConfig_getApiKey(
        JNIEnv* env,
jclass clazz) {
return env->NewStringUTF(API_KEY.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_code_files_AppConfig_getPurchaseCode(
        JNIEnv* env,
        jclass clazz) {
    return env->NewStringUTF(PURCHASE_CODE.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_code_files_AppConfig_getOneSignalAppID(
        JNIEnv* env,
        jclass clazz) {
    return env->NewStringUTF(ONESIGNAL_APP_ID.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_code_files_AppConfig_getYoutubeApiKey(
        JNIEnv* env,
        jclass clazz) {
    return env->NewStringUTF(YOUTUBE_API_KEY.c_str());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_code_files_AppConfig_getTermsUrl(
        JNIEnv* env,
        jclass clazz) {
    return env->NewStringUTF(TERMS_URL.c_str());
}