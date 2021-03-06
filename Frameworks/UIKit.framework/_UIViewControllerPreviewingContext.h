/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewControllerPreviewingContext : NSObject <UIViewControllerPreviewing_Internal, _UIPreviewInteractionControllerDelegate> {
    <UIViewControllerPreviewingDelegate> * _delegate;
    _UIPreviewInteractionController * _previewInteractionController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <UIViewControllerPreviewingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIGestureRecognizer *presentationGestureRecognizer;
@property (nonatomic, retain) _UIPreviewInteractionController *previewInteractionController;
@property (nonatomic, readonly) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) UIView *sourceView;
@property (readonly) Class superclass;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithSourceView:(id)arg1 viewController:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredSourceViewRectInCoordinateSpace:(id)arg1;
- (id)presentationGestureRecognizer;
- (id)previewInteractionController;
- (void)previewInteractionController:(id)arg1 commitViewController:(id)arg2;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtLocation:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id)arg3 presentingViewController:(id*)arg4;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forLocation:(struct CGPoint { double x1; double x2; })arg3 inSourceView:(id)arg4;
- (id)previewingGestureRecognizerForFailureRelationship;
- (void)setDelegate:(id)arg1;
- (void)setPreviewInteractionController:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setViewController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (void)unregister;
- (id)viewController;

@end
