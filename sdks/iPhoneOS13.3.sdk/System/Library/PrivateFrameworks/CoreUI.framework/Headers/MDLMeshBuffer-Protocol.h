//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MDLMeshBufferMap, NSData;
@protocol MDLMeshBufferAllocator, MDLMeshBufferZone;

@protocol MDLMeshBuffer <NSObject, NSCopying>
@property(readonly, nonatomic) NSUInteger type;
@property(readonly, retain, nonatomic) id <MDLMeshBufferZone> zone;
@property(readonly, retain, nonatomic) id <MDLMeshBufferAllocator> allocator;
@property(readonly, nonatomic) NSUInteger length;
- (MDLMeshBufferMap *)map;
- (void)fillData:(NSData *)arg1 offset:(NSUInteger)arg2;
@end

