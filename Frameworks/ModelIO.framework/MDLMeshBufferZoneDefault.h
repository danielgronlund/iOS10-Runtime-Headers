/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLMeshBufferZoneDefault : NSObject <MDLMeshBufferZone> {
    <MDLMeshBufferAllocator> * _allocator;
    unsigned int  _capacity;
    unsigned int  _usedCapacity;
}

@property (nonatomic, readonly, retain) <MDLMeshBufferAllocator> *allocator;
@property (nonatomic, readonly) unsigned int capacity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allocator;
- (void)cancelMemory:(unsigned int)arg1;
- (unsigned int)capacity;
- (id)initWithCapacity:(unsigned int)arg1 allocator:(id)arg2;
- (BOOL)reserveMemory:(unsigned int)arg1 allocator:(id)arg2;

@end