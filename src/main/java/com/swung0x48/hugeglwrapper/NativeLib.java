package com.swung0x48.hugeglwrapper;

public class NativeLib {

    // Used to load the 'hugeglwrapper' library on application startup.
    static {
        System.loadLibrary("hugeglwrapper");
    }

    /**
     * A native method that is implemented by the 'hugeglwrapper' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}