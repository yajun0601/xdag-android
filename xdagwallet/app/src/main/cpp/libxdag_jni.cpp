#include <jni.h>
#include <pthread.h>
#include <string>

#include "xdaglib/wrapper/xdagwrapper.h"


st_xdag_app_msg* XdagWalletProcessCallback(const void *call_back_object, st_xdag_event* event){

    return NULL;
}

extern "C"
JNIEXPORT jint JNICALL Java_com_xdag_wallet_XdagWrapper_XdagConnect(
        JNIEnv *env,
        jobject /* this */) {

    xdag_wrapper_init(NULL,XdagWalletProcessCallback);


    return 0;
}

extern "C"
JNIEXPORT jint JNICALL Java_com_xdag_wallet_XdagWrapper_XdagDisConnect(
        JNIEnv *env,
        jobject /* this */) {

    xdag_wrapper_init(NULL,XdagWalletProcessCallback);


    return 0;
}


extern "C"
JNIEXPORT jint JNICALL Java_com_xdag_wallet_XdagWrapper_XdagXfer(
        JNIEnv *env,
        jobject /* this */) {

    xdag_wrapper_init(NULL,XdagWalletProcessCallback);


    return 0;
}
