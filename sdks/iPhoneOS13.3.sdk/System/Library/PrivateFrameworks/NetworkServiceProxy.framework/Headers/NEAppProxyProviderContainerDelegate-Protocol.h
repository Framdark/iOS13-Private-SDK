//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NEAppProxyProviderContainer, NETunnelNetworkSettings, NSError;

@protocol NEAppProxyProviderContainerDelegate
- (void)container:(NEAppProxyProviderContainer *)arg1 didSetTunnelConfiguration:(NETunnelNetworkSettings *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)container:(NEAppProxyProviderContainer *)arg1 didRequestFlowDivertControlSocketWithCompletionHandler:(void (^)(NSFileHandle *))arg2;
- (void)container:(NEAppProxyProviderContainer *)arg1 didFailWithError:(NSError *)arg2;
- (void)container:(NEAppProxyProviderContainer *)arg1 didStartWithError:(NSError *)arg2;
@end

