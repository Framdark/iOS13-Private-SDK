//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HMDCameraRecordingPreferredAudioConfiguration : NSObject
{
    NSNumber *_bitRate;
    long long _sampleRate;
}

@property(readonly) long long sampleRate; // @synthesize sampleRate=_sampleRate;
@property(readonly) NSNumber *bitRate; // @synthesize bitRate=_bitRate;
- (id)description;
- (id)initWithSampleRate:(long long)arg1 bitRate:(id)arg2;

@end
