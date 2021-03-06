//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDShapeRep.h>

#import <iWorkImport/TSDMagicMoveMatching-Protocol.h>
#import <iWorkImport/TSWPContainerTextEditingRep-Protocol.h>
#import <iWorkImport/TSWPShapeLayoutDelegate-Protocol.h>

@class CALayer, NSArray, NSObject, TSWPRep, TSWPStorage;
@protocol TSDContainerInfo;

__attribute__((visibility("hidden")))
@interface TSWPShapeRep : TSDShapeRep <TSDMagicMoveMatching, TSWPContainerTextEditingRep, TSWPShapeLayoutDelegate>
{
    CALayer *_overflowGlyphLayer;
    CGPoint _originalAutosizePositionOffset;
    TSWPRep *_containedRep;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
+ (id)magicMoveTextMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureDescription:(id)arg3 textDeliveryType:(long long)arg4 repToOpacityTextRangeDictMap:(id)arg5;
+ (BOOL)p_shouldDisableTextMorphingBetweenOutgoingRep:(id)arg1 outgoingChunkRange:(_NSRange)arg2 incomingRep:(id)arg3 incomingChunkRange:(_NSRange)arg4;
+ (id)magicMoveAnimationMatchesFromMatches:(id)arg1 description:(id)arg2;
+ (void)p_getOutgoingTextureSet:(id )arg1 incomingTextureSet:(id )arg2 withOutgoingRep:(id)arg3 outgoingChunkRange:(_NSRange)arg4 outgoingTextureByGlyphStyle:(int)arg5 incomingRep:(id)arg6 incomingChunkRange:(_NSRange)arg7 incomingTextureByGlyphStyle:(int)arg8 includeListLabels:(BOOL)arg9;
+ (id)p_textureSetFromRep:(id)arg1 range:(_NSRange)arg2 textureByGlyphStyle:(int)arg3 includeListLabel:(BOOL)arg4 desiredContentRect:(CGRect)arg5;
+ (BOOL)p_listLabelsAreEqualWithOutgoingStorage:(id)arg1 outgoingCharIndex:(long long)arg2 incomingStorage:(id)arg3 incomingCharIndex:(long long)arg4 shouldMatch:(BOOL )arg5;
+ (NSUInteger)p_longestChunkInOutgoingObjects:(id)arg1 incomingObjects:(id)arg2 textDeliveryType:(long long)arg3 addOutgoingChunksToArray:(id)arg4 addIncomingChunksToArray:(id)arg5 textureDescription:(id)arg6;
+ (id)p_stringByApplyingCapitalizationPropertyFromStorage:(id)arg1 withRange:(_NSRange)arg2 toString:(id)arg3;
+ (id)p_potentialMatchesWithChunkLength:(NSUInteger)arg1 outgoingTextChunks:(id)arg2 incomingTextChunks:(id)arg3 textureDescription:(id)arg4 textDeliveryType:(long long)arg5;
+ (double)p_mmAttributeMatchPercentWithOutgoingTextChunk:(id)arg1 incomingTextChunk:(id)arg2;
@property(readonly, nonatomic) TSWPRep *containedRep; // @synthesize containedRep=_containedRep;
// - (void).cxx_destruct;
- (void)selectChildRep:(id)arg1 extendingSelection:(BOOL)arg2;
- (BOOL)canSelectChildRep:(id)arg1;
- (void)addAdditionalChildLayersToArray:(id)arg1;
@property(readonly, nonatomic) NSArray *childReps;
@property(readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)updateChildrenFromLayout;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (id)newTextureRenderableForRange:(_NSRange)arg1 includeListLabel:(BOOL)arg2 isMagicMove:(BOOL)arg3 desiredContentRect:(CGRect)arg4 textureByGlyphStyle:(int)arg5 includeGroupedShadow:(BOOL)arg6 groupedShadowOnly:(BOOL)arg7 textureBounds:(CGRect )arg8;
- (BOOL)p_getBoundsRect:(CGRect )arg1 contentRect:(CGRect )arg2 transform:(CGAffineTransform )arg3 applyReflection:(BOOL )arg4 applyShadow:(BOOL )arg5 forRange:(_NSRange)arg6 includeListLabel:(BOOL)arg7 isMagicMove:(BOOL)arg8;
- (BOOL)p_hasContentForRange:(_NSRange)arg1 labelOnly:(BOOL)arg2;
- (void)p_drawRubyInContext:(CGContext )arg1 forRange:(_NSRange)arg2;
- (CGRect)p_rectForRubyFields:(_NSRange)arg1;
@property(readonly, nonatomic) TSWPStorage *textStorageForTexture;
- (id)textureForDescription:(id)arg1;
- (long long)stageIndexForStorageRange:(_NSRange)arg1 forTextureDescription:(id)arg2 stageChunks:(id)arg3;
- (id)stageChunksForDeliveryStyle:(NSUInteger)arg1 byGlyphStyle:(int)arg2;
@property(readonly, nonatomic) BOOL isShapeInvisible;

@end

