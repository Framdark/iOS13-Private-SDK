//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBModelFieldOption.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMBModelFieldOptionExternalRecordField : HMBModelFieldOption
{
    BOOL _encrypted;
    NSString *_fieldName;
}

@property(readonly, nonatomic) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
// - (void).cxx_destruct;
- (void)applyTo:(id)arg1;
- (id)initWithExternalRecordField:(id)arg1 encrypted:(BOOL)arg2;

@end

