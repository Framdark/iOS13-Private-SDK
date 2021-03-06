//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NUTitleViewUpdate : NSObject
{
    BOOL _cancelPendingUpdates;
    BOOL _speakAccessibilityTitleWhenDisplayed;
    id _value;
    NSUInteger _valueType;
    NSUInteger _styleType;
    double _lingerTimeInterval;
}

@property(nonatomic, getter=shouldSpeakAccessibilityTitleWhenDisplayed) BOOL speakAccessibilityTitleWhenDisplayed; // @synthesize speakAccessibilityTitleWhenDisplayed=_speakAccessibilityTitleWhenDisplayed;
@property(nonatomic) double lingerTimeInterval; // @synthesize lingerTimeInterval=_lingerTimeInterval;
@property(nonatomic, getter=shouldCancelPendingUpdates) BOOL cancelPendingUpdates; // @synthesize cancelPendingUpdates=_cancelPendingUpdates;
@property(readonly, nonatomic) NSUInteger styleType; // @synthesize styleType=_styleType;
@property(readonly, nonatomic) NSUInteger valueType; // @synthesize valueType=_valueType;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *accessibilityTitle;
- (BOOL)isEqual:(id)arg1;
- (id)initWithValue:(id)arg1 valueType:(NSUInteger)arg2 styleType:(NSUInteger)arg3;
- (id)initWithText:(id)arg1 styleType:(NSUInteger)arg2 glyph:(id)arg3;
- (id)initWithText:(id)arg1 styleType:(NSUInteger)arg2;
- (id)initWithImage:(id)arg1;
- (id)init;

@end

