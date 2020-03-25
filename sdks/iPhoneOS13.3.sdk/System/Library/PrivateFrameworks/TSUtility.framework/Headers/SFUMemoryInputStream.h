//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/SFUBufferedInputStream-Protocol.h>

@class NSData;

@interface SFUMemoryInputStream : NSObject <SFUBufferedInputStream>
{
    NSData *mData;
    const char mStart;
    const char mCurrent;
    const char mEnd;
}

- (id)closeLocalStream;
- (void)close;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (BOOL)seekWithinBufferToOffset:(long long)arg1;
- (NSUInteger)readToOwnBuffer:(const char )arg1 size:(NSUInteger)arg2;
- (void)seekToOffset:(long long)arg1;
- (BOOL)canSeek;
- (NSUInteger)readToBuffer:(char )arg1 size:(NSUInteger)arg2;
- (long long)offset;
- (void)dealloc;
- (id)initWithData:(id)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3;
- (id)initWithData:(id)arg1;

@end

