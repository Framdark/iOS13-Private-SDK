//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface INCExtensionPlugInBundle : NSObject
{
    Class _principalClass;
    NSSet *_intentsSupported;
    NSSet *_intentsRestrictedWhileLocked;
}

@property(readonly, copy, nonatomic) NSSet *intentsRestrictedWhileLocked; // @synthesize intentsRestrictedWhileLocked=_intentsRestrictedWhileLocked;
@property(readonly, copy, nonatomic) NSSet *intentsSupported; // @synthesize intentsSupported=_intentsSupported;
@property(readonly, nonatomic) Class principalClass; // @synthesize principalClass=_principalClass;
// - (void).cxx_destruct;
- (id)initWithPrincipalClass:(Class)arg1 intentsSupported:(id)arg2 intentsRestrictedWhileLocked:(id)arg3;

@end

