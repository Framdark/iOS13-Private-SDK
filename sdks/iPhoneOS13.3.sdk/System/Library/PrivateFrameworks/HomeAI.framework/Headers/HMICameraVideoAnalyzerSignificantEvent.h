//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class HMICameraVideoFrame, NSDictionary;

@interface HMICameraVideoAnalyzerSignificantEvent : NSObject <NSSecureCoding>
{
    long long _events;
    HMICameraVideoFrame *_videoFrame;
    NSDictionary *_annotationScores;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSDictionary *annotationScores; // @synthesize annotationScores=_annotationScores;
@property(readonly) HMICameraVideoFrame *videoFrame; // @synthesize videoFrame=_videoFrame;
@property(readonly) long long events; // @synthesize events=_events;
// - (void).cxx_destruct;
- (long long)confidenceThatEventOccurred:(long long)arg1;
- (id)initWithEvents:(long long)arg1 annotationScores:(id)arg2 videoFrame:(id)arg3;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

