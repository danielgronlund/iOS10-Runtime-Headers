/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUAVRouteHeaderLabel : UIView {
    bool  _animating;
    bool  _needsAttributedTextReload;
    bool  _nextAttributedTextReloadShouldAnimate;
    UILabel * _primaryLabel;
    NSAttributedString * _primaryLabelAttributedText;
    UIColor * _primaryTextColor;
    MPAVRoute * _route;
    UILabel * _secondaryLabel;
    NSAttributedString * _secondaryLabelAttributedText;
    UIColor * _secondaryTextColor;
    bool  _showNowPlayingText;
    bool  _showPendingText;
}

@property (nonatomic, readonly) double baselineOffsetFromBottom;
@property (nonatomic, readonly) UILabel *primaryLabel;
@property (nonatomic, retain) UIColor *primaryTextColor;
@property (nonatomic, retain) MPAVRoute *route;
@property (nonatomic, readonly) UILabel *secondaryLabel;
@property (nonatomic, retain) UIColor *secondaryTextColor;
@property (nonatomic) bool showNowPlayingText;
@property (nonatomic) bool showPendingText;

- (void).cxx_destruct;
- (id)_currentDeviceConnectingText;
- (id)_currentDeviceLocalRoutingNowPlayingText;
- (void)_getAttributedTextForPrimaryLabel:(id*)arg1 secondaryLabel:(id*)arg2;
- (void)_init;
- (id)_labelAttributesUsingSecondaryStyle:(bool)arg1;
- (void)_reloadAttributedTextAnimated:(bool)arg1;
- (void)_setNeedsAttributedTextReloadAnimated:(bool)arg1;
- (id)_stateAwareAttributedTextForRoute:(id)arg1 usingSecondaryStyleForRouteName:(bool)arg2 orForNowPlayingText:(bool)arg3;
- (double)baselineOffsetFromBottom;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)primaryLabel;
- (id)primaryTextColor;
- (id)route;
- (id)secondaryLabel;
- (id)secondaryTextColor;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setShowNowPlayingText:(bool)arg1;
- (void)setShowNowPlayingText:(bool)arg1 animated:(bool)arg2;
- (void)setShowPendingText:(bool)arg1;
- (void)setShowPendingText:(bool)arg1 animated:(bool)arg2;
- (bool)showNowPlayingText;
- (bool)showPendingText;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end