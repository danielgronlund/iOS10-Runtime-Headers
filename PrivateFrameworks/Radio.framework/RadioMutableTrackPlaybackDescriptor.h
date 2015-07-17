/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutableTrackPlaybackDescriptor : RadioTrackPlaybackDescriptor

@property (getter=isCurrent, nonatomic) BOOL current;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic) double pauseTime;
@property (nonatomic, retain) NSDate *skipDate;
@property (nonatomic) long long storeID;
@property (nonatomic, copy) NSDictionary *trackInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCurrent:(BOOL)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setPauseTime:(double)arg1;
- (void)setSkipDate:(id)arg1;
- (void)setStoreID:(long long)arg1;
- (void)setTrackInfo:(id)arg1;

@end