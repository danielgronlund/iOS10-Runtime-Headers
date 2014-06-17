/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSError, NSMutableArray, NSObject<OS_dispatch_semaphore>;

@interface _SBFAccumulatingObserver : NSObject <SBFObserver> {
    NSMutableArray *_results;
    NSError *_error;
    bool_didComplete;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}


- (id)waitForResults:(id*)arg1;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (id)init;
- (void)dealloc;

@end