//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKController, AKHighlightAnnotation;

@interface AKHighlightAnnotationController : NSObject
{
    AKController *_controller;
    AKHighlightAnnotation *_continuousHighlight;
}

@property(retain) AKHighlightAnnotation *continuousHighlight; // @synthesize continuousHighlight=_continuousHighlight;
@property __weak AKController *controller; // @synthesize controller=_controller;
// - (void).cxx_destruct;
- (BOOL)_clearHighlightsWithStyleMatchingMask:(NSUInteger)arg1 except:(id)arg2 inRange:(_NSRange)arg3 onPageController:(id)arg4;
- (BOOL)_adaptExistingHighlightsToNewHighlight:(id)arg1 onPageController:(id)arg2 firstModifiedHighlight:(id )arg3;
- (id)_highlightsInCharacterIndexRange:(_NSRange)arg1 onPageController:(id)arg2;
- (id)_createHighlightAnnotationWithAttributeTag:(long long)arg1;
- (void)endContinuousHighlighting;
- (void)continueHighlighting;
- (void)beginContinuousHighlighting;
- (id)highlightsWithinSelection;
- (void)clearHighlightsWithinSelection;
- (void)performOneShotHighlightWithAttributeTag:(long long)arg1;
- (id)initWithController:(id)arg1;

@end

