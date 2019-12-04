//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCameraRecordingUploaderFactory-Protocol.h>

@class NSString;
@protocol HMDCameraRecordingUploaderDataSource;

@interface HMDCameraRecordingUploaderFactory : NSObject <HMDCameraRecordingUploaderFactory>
{
    id <HMDCameraRecordingUploaderDataSource> _dataSource;
}

@property(readonly) id <HMDCameraRecordingUploaderDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)createSignificantEventOperationForModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 dateOfOccurrence:(id)arg4 significantEventReason:(unsigned long long)arg5 confidenceLevel:(unsigned long long)arg6 heroFrameData:(id)arg7 offset:(double)arg8 homePresenceByPairingIdentity:(id)arg9 dataSource:(id)arg10;
- (id)createFinalizeOperationForModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 dataSource:(id)arg4;
- (id)createPosterFrameUploadOperationForModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 segmentData:(id)arg4 segmentMetadata:(id)arg5 dataSource:(id)arg6;
- (id)createVideoSegmentUploadOperationForModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 segmentData:(id)arg4 segmentMetadata:(id)arg5 dataSource:(id)arg6;
- (id)createClipOperationForLocalZone:(id)arg1 targetFragmentDuration:(double)arg2 startDate:(id)arg3 dataSource:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
