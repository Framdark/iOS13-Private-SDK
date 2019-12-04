//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXAudioHardwareManager : NSObject
{
}

+ (id)defaultPort;
+ (void)setDefaultPort:(id)arg1;
+ (id)defaultPortChannels;
+ (id)channelsForPort:(id)arg1;
+ (void)updateTestingChannels;
+ (void)setDefaultPortChannels:(id)arg1;
+ (void)disableMultiroute;
+ (void)enableMultiroute;
+ (_Bool)channelsAreWiredHeadphones:(id)arg1;
+ (_Bool)channelsAreAirplay:(id)arg1 route:(id)arg2;
+ (id)sharedManager;
- (void)setSavedChannels:(id)arg1 forOutput:(id)arg2 forSource:(long long)arg3;
- (void)_handleSurroundSoundDefaults:(id)arg1 returnedChannels:(id)arg2 port:(id)arg3 source:(long long)arg4;
- (id)savedChannelsForOutput:(id)arg1 forSource:(long long)arg2;
- (id)_savedIdForRouteDescription:(id)arg1;
- (id)init;

@end
