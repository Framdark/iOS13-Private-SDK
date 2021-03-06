//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/SFUBufferedInputStream-Protocol.h>

@protocol SFUInputStream;

@interface SFUBufferedInputStream : NSObject <SFUBufferedInputStream>
{
    id <SFUInputStream> mStream;
    char mBuffer;
    NSUInteger mBufferSize;
    long long mBufferOffset;
    long long mBufferStart;
    long long mBufferEnd;
}

- (id)closeLocalStream;
- (void)close;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (void)seekToOffset:(long long)arg1;
- (BOOL)canSeek;
- (BOOL)seekWithinBufferToOffset:(long long)arg1;
- (NSUInteger)readToOwnBuffer:(const char )arg1 size:(NSUInteger)arg2;
- (NSUInteger)readToBuffer:(char )arg1 size:(NSUInteger)arg2;
- (long long)offset;
- (void)dealloc;
- (id)initWithStream:(id)arg1 dataLength:(long long)arg2;
- (id)initWithStream:(id)arg1 bufferSize:(NSUInteger)arg2;
- (id)initWithStream:(id)arg1;

@end

