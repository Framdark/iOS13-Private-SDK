//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTPreset, NSString;

@interface AVTPresetDependency : NSObject
{
    long long category;
    AVTPreset *preset;
    NSString *variantName;
}

@property(retain, nonatomic) NSString *variantName; // @synthesize variantName;
@property(retain, nonatomic) AVTPreset *preset; // @synthesize preset;
@property(nonatomic) long long category; // @synthesize category;
- (id)debugDescription;

@end
