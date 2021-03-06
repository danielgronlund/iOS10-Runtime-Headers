/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPreviewPresentationController : UIPresentationController {
    UIResponder * _currentPinnedResponder;
    NSArray * _keyboardSnapshotViews;
    NSHashTable * _keyboardWindows;
    UIVisualEffectView * _presentationContainerEffectView;
    <UIPreviewInteractionAnimating> * _previewInteractionAnimator;
    UIView * _statusBarSnapshotView;
    UIWindow * _statusBarWindow;
}

@property (nonatomic) UIResponder *currentPinnedResponder;
@property (nonatomic, copy) NSArray *keyboardSnapshotViews;
@property (nonatomic, copy) NSHashTable *keyboardWindows;
@property (nonatomic, retain) UIVisualEffectView *presentationContainerEffectView;
@property (nonatomic, retain) <UIPreviewInteractionAnimating> *previewInteractionAnimator;
@property (nonatomic, retain) UIView *statusBarSnapshotView;
@property (nonatomic, retain) UIWindow *statusBarWindow;

+ (id)_backgroundEffectForTraitCollection:(id)arg1 interactive:(bool)arg2;
+ (bool)_shouldApplyVisualEffectsToPresentingView;

- (void).cxx_destruct;
- (void)_animatePreviewTransitionIfNeeded:(id)arg1;
- (void)_applyVisualEffectsForPresentationPhase:(unsigned long long)arg1;
- (void)_cancelTransitionDidEnd:(bool)arg1;
- (void)_finalizeAfterDismissTransition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (void)_interactiveHighlightTransitionDidEnd:(bool)arg1;
- (bool)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (void)_layoutForCancel;
- (void)_layoutForInteractiveHighlight;
- (void)_layoutForPreview;
- (void)_prepareContainerViewForPresentationTransition;
- (void)_prepareDismissAnimationsForTransitionCoordinator:(id)arg1;
- (void)_prepareForPreviewInteractionAnimator:(id)arg1;
- (void)_prepareKeyboardForPresentationTransition;
- (void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg1;
- (void)_prepareStatusBarForPresentationTransition;
- (id)_presentationContainerView;
- (bool)_presentationPotentiallyUnderlapsStatusBar;
- (void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1;
- (void)_previewTransitionDidEnd:(bool)arg1;
- (bool)_shouldDisableInteractionDuringTransitions;
- (bool)_shouldKeepCurrentFirstResponder;
- (bool)_shouldSavePresentedViewControllerForStateRestoration;
- (id)currentPinnedResponder;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 animator:(id)arg3;
- (id)keyboardSnapshotViews;
- (id)keyboardWindows;
- (id)presentationContainerEffectView;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)previewInteractionAnimator;
- (void)setCurrentPinnedResponder:(id)arg1;
- (void)setKeyboardSnapshotViews:(id)arg1;
- (void)setKeyboardWindows:(id)arg1;
- (void)setPresentationContainerEffectView:(id)arg1;
- (void)setPreviewInteractionAnimator:(id)arg1;
- (void)setStatusBarSnapshotView:(id)arg1;
- (void)setStatusBarWindow:(id)arg1;
- (id)statusBarSnapshotView;
- (id)statusBarWindow;

@end
