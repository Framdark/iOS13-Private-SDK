//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolCSSStyleSheetBody : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSArray *rules;
@property(copy, nonatomic) NSString *styleSheetId;
- (id)initWithStyleSheetId:(id)arg1 rules:(id)arg2;

@end

