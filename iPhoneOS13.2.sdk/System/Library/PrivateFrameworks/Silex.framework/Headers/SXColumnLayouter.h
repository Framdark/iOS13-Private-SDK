//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayouter-Protocol.h>

@class NSMutableDictionary, NSString, SXLayouterFactory;
@protocol SXLayoutContextFactory, SXLayouterDelegate, SXUnitConverterFactory;

@interface SXColumnLayouter : NSObject <SXLayouter>
{
    id <SXLayouterDelegate> _delegate;
    SXLayouterFactory *_layouterFactory;
    NSMutableDictionary *_intersectionCache;
    id <SXLayoutContextFactory> _layoutContextFactory;
    id <SXUnitConverterFactory> _unitConverterFactory;
}

@property(readonly, nonatomic) id <SXUnitConverterFactory> unitConverterFactory; // @synthesize unitConverterFactory=_unitConverterFactory;
@property(readonly, nonatomic) id <SXLayoutContextFactory> layoutContextFactory; // @synthesize layoutContextFactory=_layoutContextFactory;
@property(readonly, nonatomic) NSMutableDictionary *intersectionCache; // @synthesize intersectionCache=_intersectionCache;
@property(readonly, nonatomic) SXLayouterFactory *layouterFactory; // @synthesize layouterFactory=_layouterFactory;
@property(nonatomic) __weak id <SXLayouterDelegate> delegate; // @synthesize delegate=_delegate;
- (int)layoutAttributeForAnchor:(long long)arg1;
- (double)factorForLayoutAttribute:(int)arg1;
- (_Bool)componentBlueprint:(id)arg1 shouldIntersectWithComponentBlueprint:(id)arg2;
- (_Bool)stack:(id)arg1 stackComponents:(id)arg2 containsComponentIncludingAnchoredComponents:(id)arg3 forSourceComponent:(id)arg4;
- (_Bool)intersectionPossibleForComponentWithBlueprint:(id)arg1 anchoredToComponentWithBlueprint:(id)arg2 layoutBlueprint:(id)arg3 columnStack:(id)arg4;
- (_Bool)anchorPossibleForComponentWithBlueprint:(id)arg1 anchoredToComponentWithBlueprint:(id)arg2 layoutBlueprint:(id)arg3 columnStack:(id)arg4;
- (id)sortComponentDependencies:(id)arg1 forBlueprint:(id)arg2;
- (id)columnStackForLayoutBlueprint:(id)arg1 columnLayout:(id)arg2;
- (void)analyzeSnapLinesForLayoutBlueprint:(id)arg1;
- (struct CGSize)calculateSizeForComponentNode:(id)arg1 columnLayout:(id)arg2 layoutBlueprint:(id)arg3 dependencyResolver:(id)arg4;
- (struct CGPoint)calculatePositionForComponentNode:(id)arg1 columnLayout:(id)arg2 layoutBlueprint:(id)arg3;
- (id)findComponentStackBeforeComponent:(id)arg1 inColumnStack:(id)arg2;
- (void)createDependenciesForLayoutBlueprint:(id)arg1 columnStack:(id)arg2 inDependencyResolver:(id)arg3;
- (void)layoutBlueprint:(id)arg1 columnLayout:(id)arg2 description:(id)arg3 shouldContinue:(_Bool *)arg4;
- (id)initWithLayouterFactory:(id)arg1 layoutContextFactory:(id)arg2 unitConverterFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
