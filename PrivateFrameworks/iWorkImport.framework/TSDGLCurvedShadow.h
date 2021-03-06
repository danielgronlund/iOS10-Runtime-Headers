/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLCurvedShadow : TSDGLShadow {
    TSDGLDataBuffer * mAlphaDataBuffer;
    TSDGLFrameBuffer * mAlphaFrameBuffer;
    TSDGLShader * mAlphaShader;
    char * mBuffer;
    CIContext * mCIContext;
    TSDGLDataBuffer * mCurveInterpolationDataBuffer;
    TSDGLFrameBuffer * mCurveInterpolationFrameBuffer;
    TSDGLShader * mCurveInterpolationShader;
    TSDGLShader * mCurvedShader;
}

- (double)baseBlurRadiusForCurve:(double)arg1 framebufferSize:(struct CGSize { double x1; double x2; })arg2;
- (void)dealloc;
- (void)drawShadow:(id)arg1 forImage:(struct CGImage { }*)arg2 inContext:(struct CGContext { }*)arg3 forSize:(struct CGSize { double x1; double x2; })arg4;
- (id)p_alphaOnlyImageFromImage:(id)arg1;
- (id)p_blurredImage:(id)arg1 edgeBlurRadius:(double)arg2 middleBlurRadius:(double)arg3 padding:(double)arg4 edgeOpacity:(double)arg5 middleOpacity:(double)arg6;
- (id)p_curvedImageFromImage:(id)arg1 curveAmount:(double)arg2 padding:(double)arg3;
- (id)p_debugColorOverlayImageFromImage:(id)arg1;
- (void)p_debugLogImage:(id)arg1 name:(id)arg2;
- (id)p_gradientImageWithExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 middleWhiteValue:(double)arg2 edgeWhiteValue:(double)arg3 includeAlpha:(bool)arg4 padding:(double)arg5;
- (id)p_imageByMultiplyingImage:(id)arg1 withImage:(id)arg2;
- (void)p_setupCIContext;
- (bool)p_shrinkImageIfNecessary:(struct CGImage { }*)arg1 originalSize:(struct CGSize { double x1; double x2; })arg2 newImage:(struct CGImage {}**)arg3 newSize:(struct CGSize { double x1; double x2; }*)arg4;
- (id)p_tintedCIImageFromImage:(id)arg1 withColor:(struct { float x1; float x2; float x3; float x4; })arg2;

@end
