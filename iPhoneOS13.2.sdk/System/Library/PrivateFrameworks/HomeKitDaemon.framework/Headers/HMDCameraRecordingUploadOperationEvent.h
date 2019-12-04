//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSDate, NSError, NSString, NSUUID;

@interface HMDCameraRecordingUploadOperationEvent : HMDLogEvent <HMDAWDLogEvent>
{
    _Bool _didCausePreviousClipToFinalizeDueToDurationLimit;
    int _operationType;
    double _runTime;
    NSError *_error;
    double _totalClipDuration;
    unsigned long long _retryCount;
    NSDate *_operationStartDate;
    NSUUID *_clipModelID;
}

+ (int)operationTypeFromOperation:(id)arg1;
+ (id)uuid;
@property(readonly, copy) NSUUID *clipModelID; // @synthesize clipModelID=_clipModelID;
@property(retain) NSDate *operationStartDate; // @synthesize operationStartDate=_operationStartDate;
@property unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property double totalClipDuration; // @synthesize totalClipDuration=_totalClipDuration;
@property(retain) NSError *error; // @synthesize error=_error;
@property _Bool didCausePreviousClipToFinalizeDueToDurationLimit; // @synthesize didCausePreviousClipToFinalizeDueToDurationLimit=_didCausePreviousClipToFinalizeDueToDurationLimit;
@property int operationType; // @synthesize operationType=_operationType;
@property double runTime; // @synthesize runTime=_runTime;
@property(readonly) unsigned long long totalClipDurationMilliseconds;
@property(readonly) unsigned long long runTimeInMilliseconds;
@property(readonly) unsigned long long operationStartTime;
@property(readonly) unsigned long long startTimestamp;
- (id)attributeDescriptions;
- (id)initWithClipModelID:(id)arg1 operation:(id)arg2;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
