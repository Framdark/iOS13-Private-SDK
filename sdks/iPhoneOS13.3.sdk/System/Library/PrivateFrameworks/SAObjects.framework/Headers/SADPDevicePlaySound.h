//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SADPDevicePlaySound : SABaseClientBoundCommand
{
}

+ (id)devicePlaySoundWithDictionary:(id)arg1 context:(id)arg2;
+ (id)devicePlaySound;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *devices;
@property(copy, nonatomic) NSString *action;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

