//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WFContentProperty;

@interface WFVariableConfigurationProperty : NSObject
{
    BOOL _negativeProperty;
    WFContentProperty *_contentProperty;
    NSString *_label;
}

@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) BOOL negativeProperty; // @synthesize negativeProperty=_negativeProperty;
@property(readonly, nonatomic) WFContentProperty *contentProperty; // @synthesize contentProperty=_contentProperty;
// - (void).cxx_destruct;
- (id)initWithContentProperty:(id)arg1 negativeProperty:(BOOL)arg2;
- (id)initWithLabel:(id)arg1;

@end

