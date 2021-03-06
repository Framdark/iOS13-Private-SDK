//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SignpostSupport/SignpostObject.h>

#import <SignpostSupport/SignpostSupportLoggingSupportArchiveEvent-Protocol.h>

@class NSArray, NSString, NSUUID, SignpostMetrics;

@interface SignpostEvent : SignpostObject <SignpostSupportLoggingSupportArchiveEvent>
{
    BOOL __hasTotalFrames;
    BOOL _isAnimationStart;
    int _tv_usec;
    int _tz_minuteswest;
    int _tz_dsttime;
    int _processID;
    long long _tv_sec;
    NSUInteger _processUniqueID;
    NSUInteger _threadID;
    NSUInteger _eventType;
    NSUInteger _overridingBeginMachContinuousTime;
    NSUInteger _overridingEndMachContinuousTime;
    NSUInteger _overridingEmitMachContinuousTime;
    NSUUID *_processImageUUID;
    NSString *_processImagePath;
    NSString *_processName;
    NSString *_metadata;
    NSArray *_metadataSegments;
    NSArray *_stackFrames;
    SignpostMetrics *_metrics;
    NSUInteger __totalFrameCount;
    NSUInteger __machContinuousTimestamp;
}

+ (id)serializationTypeNumber;
@property(nonatomic) NSUInteger _machContinuousTimestamp; // @synthesize _machContinuousTimestamp=__machContinuousTimestamp;
@property(nonatomic) BOOL isAnimationStart; // @synthesize isAnimationStart=_isAnimationStart;
@property(nonatomic) NSUInteger _totalFrameCount; // @synthesize _totalFrameCount=__totalFrameCount;
@property(nonatomic) BOOL _hasTotalFrames; // @synthesize _hasTotalFrames=__hasTotalFrames;
@property(readonly, nonatomic) SignpostMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) NSArray *stackFrames; // @synthesize stackFrames=_stackFrames;
@property(retain, nonatomic) NSArray *metadataSegments; // @synthesize metadataSegments=_metadataSegments;
@property(retain, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(retain, nonatomic) NSString *processImagePath; // @synthesize processImagePath=_processImagePath;
@property(retain, nonatomic) NSUUID *processImageUUID; // @synthesize processImageUUID=_processImageUUID;
@property(nonatomic) NSUInteger overridingEmitMachContinuousTime; // @synthesize overridingEmitMachContinuousTime=_overridingEmitMachContinuousTime;
@property(nonatomic) NSUInteger overridingEndMachContinuousTime; // @synthesize overridingEndMachContinuousTime=_overridingEndMachContinuousTime;
@property(nonatomic) NSUInteger overridingBeginMachContinuousTime; // @synthesize overridingBeginMachContinuousTime=_overridingBeginMachContinuousTime;
@property(nonatomic) NSUInteger eventType; // @synthesize eventType=_eventType;
@property(nonatomic) NSUInteger threadID; // @synthesize threadID=_threadID;
@property(nonatomic) NSUInteger processUniqueID; // @synthesize processUniqueID=_processUniqueID;
@property(nonatomic) int processID; // @synthesize processID=_processID;
@property(nonatomic) int tz_dsttime; // @synthesize tz_dsttime=_tz_dsttime;
@property(nonatomic) int tz_minuteswest; // @synthesize tz_minuteswest=_tz_minuteswest;
@property(nonatomic) int tv_usec; // @synthesize tv_usec=_tv_usec;
@property(nonatomic) long long tv_sec; // @synthesize tv_sec=_tv_sec;
// - (void).cxx_destruct;
- (void)_populateMetrics;
- (id)_dataArgumentWithName:(id)arg1;
- (id)_numberArgumentWithName:(id)arg1;
- (id)_stringArgumentWithName:(id)arg1;
- (id)_argumentObjectWithName:(id)arg1 expectedClass:(Class)arg2;
- (id)_argumentObjectWithName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)_adjustEndTimeVal:(struct timeval )arg1;
- (void)_adjustBeginTimeVal:(struct timeval )arg1;
- (void)_adjustTimeStruct:(struct timeval )arg1 asBegin:(BOOL)arg2;
@property(readonly, nonatomic) NSString *_key;
@property(readonly, nonatomic) BOOL overridesEndTime;
@property(readonly, nonatomic) BOOL overridesBeginTime;
@property(readonly, nonatomic) BOOL overridesEmitTime;
- (float)durationSeconds;
- (NSUInteger)durationMachContinuousTime;
- (NSUInteger)endMachContinuousTime;
- (NSUInteger)startMachContinuousTime;
@property(readonly, nonatomic) BOOL overridesTime;
@property(readonly, nonatomic) NSUInteger overridingEmitNanoseconds;
@property(readonly, nonatomic) NSUInteger overridingEndNanoseconds;
@property(readonly, nonatomic) NSUInteger overridingBeginNanoseconds;
@property(readonly, nonatomic) NSUInteger timeRecordedNanoseconds;
@property(readonly, nonatomic) NSUInteger timeRecordedMachContinuousTime;
@property(readonly, nonatomic) BOOL isSyntheticIntervalEvent;
- (NSUInteger)_resolvedEndTime;
- (NSUInteger)_resolvedBeginTime;
@property(readonly, copy) NSString *debugDescription;
- (id)_debugDescription:(BOOL)arg1;
- (id)_descriptionStringForColumn:(NSUInteger)arg1 timeFormat:(NSUInteger)arg2 asBegin:(BOOL)arg3;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 timebaseRatio:(double)arg3 unixDate:(struct timeval )arg4 unixTimeZone:(struct timezone )arg5 stackFrames:(id)arg6;
@property(readonly, nonatomic) BOOL _overridesOwnTime;
@property(readonly, nonatomic) NSUInteger _resolvedEventType;
- (id)initWithDictionary:(id)arg1;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2;
- (id)humanReadableType;

@end

