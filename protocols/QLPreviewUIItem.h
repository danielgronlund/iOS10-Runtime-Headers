/* Generated by RuntimeBrowser.
 */

@protocol QLPreviewUIItem <QLPreviewItem>

@required

- (void)cancelIconUpdate;
- (UIImage *)icon;
- (BOOL)isFolder;
- (int)level;
- (int)previewItemIndex;
- (void)updateIconWithSize:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 6: struct CGSize { float x1; float x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end