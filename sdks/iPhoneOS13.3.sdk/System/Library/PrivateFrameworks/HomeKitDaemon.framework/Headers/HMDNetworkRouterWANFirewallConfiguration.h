//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>

@class HMDNetworkRouterWANFirewall, HMDNetworkRouterWANFirewallRuleList, NSString;

@interface HMDNetworkRouterWANFirewallConfiguration : NSObject <NSCopying, HMDTLVProtocol>
{
    HMDNetworkRouterWANFirewall *_type;
    HMDNetworkRouterWANFirewallRuleList *_ruleList;
}

+ (id)parsedFromData:(id)arg1 error:(id )arg2;
+ (id)configurationFromFirewallRuleConfiguration:(id)arg1;
@property(retain, nonatomic) HMDNetworkRouterWANFirewallRuleList *ruleList; // @synthesize ruleList=_ruleList;
@property(retain, nonatomic) HMDNetworkRouterWANFirewall *type; // @synthesize type=_type;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializeWithError:(id )arg1;
- (BOOL)parseFromData:(id)arg1 error:(id )arg2;
- (id)initWithType:(id)arg1 ruleList:(id)arg2;
- (id)init;

@end
