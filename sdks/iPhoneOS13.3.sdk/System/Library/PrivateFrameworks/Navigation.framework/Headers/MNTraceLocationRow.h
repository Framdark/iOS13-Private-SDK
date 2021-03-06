//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNTracePlayerTimelineStreamObjectType-Protocol.h>

@class MNLocation, MNLocationMatchInfo, NSError;

@interface MNTraceLocationRow : NSObject <MNTracePlayerTimelineStreamObjectType>
{
    double _timestamp;
    MNLocation *_location;
    NSError *_error;
    MNLocationMatchInfo *_matchInfo;
    long long _locationEventType;
    NSUInteger _originalMatchType;
}

@property(nonatomic) NSUInteger originalMatchType; // @synthesize originalMatchType=_originalMatchType;
@property(nonatomic) long long locationEventType; // @synthesize locationEventType=_locationEventType;
@property(retain, nonatomic) MNLocationMatchInfo *matchInfo; // @synthesize matchInfo=_matchInfo;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) MNLocation *location; // @synthesize location=_location;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
@property(readonly, nonatomic) double position;

@end

