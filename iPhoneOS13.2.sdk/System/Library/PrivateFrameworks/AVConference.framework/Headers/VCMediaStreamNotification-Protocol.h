//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class VCMasterKeyIndex, VCMediaStream;

@protocol VCMediaStreamNotification 
- (void)mediaStream:(VCMediaStream *)arg1 didReceiveNewMasterKeyIndex:(VCMasterKeyIndex *)arg2;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList *)arg1;
@end
