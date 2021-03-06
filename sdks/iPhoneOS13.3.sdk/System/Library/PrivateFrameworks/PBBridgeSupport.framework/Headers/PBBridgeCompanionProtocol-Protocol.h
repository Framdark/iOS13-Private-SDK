//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IDSProtobuf;

@protocol PBBridgeCompanionProtocol <NSObject>
- (void)handleWarrantySentinelResponse:(IDSProtobuf *)arg1;
- (void)sendProxyActivationRequest:(IDSProtobuf *)arg1;
- (void)enableSiriForGizmo:(IDSProtobuf *)arg1;
- (void)getSiriState:(IDSProtobuf *)arg1;
- (void)getCompanionRegion:(IDSProtobuf *)arg1;
- (void)getCompanionLanguage:(IDSProtobuf *)arg1;
- (void)gizmoDidEndPasscodeCreation:(IDSProtobuf *)arg1;
- (void)gizmoDidFinishActivating:(IDSProtobuf *)arg1;
- (void)gizmoDidBeginActivating:(IDSProtobuf *)arg1;

@optional
- (void)gizmoBecameAvailableWantsConfirmation:(IDSProtobuf *)arg1;
@end

