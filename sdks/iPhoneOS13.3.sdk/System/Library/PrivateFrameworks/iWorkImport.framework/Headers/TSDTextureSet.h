//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class CALayer, NSArray, NSDictionary, NSMapTable, NSMutableArray, TSDBitmapRenderingQualityInfo, TSDRep;

__attribute__((visibility("hidden")))
@interface TSDTextureSet : NSObject <NSCopying>
{
    CALayer *_layer;
    NSMutableArray *_allTextures;
    NSMutableArray *_animatableTextures;
    NSDictionary *_bakedAttributes;
    NSMapTable *_eventIndexToViewLayerMap;
    NSMutableArray *_finalTextures;
    NSMapTable *_textureToStageIndexMap;
    NSMapTable *_flattenKeyToFlattenedTextureMap;
    long long _textureZOrder;
    NSMapTable *_origBoundingRectForStageMap;
    BOOL _isBackground;
    BOOL _isBaked;
    BOOL _isFlippedHorizontally;
    BOOL _containsContentBuildTextures;
    BOOL _isMagicMove;
    BOOL _shouldTransformUsingTextureCenter;
    BOOL _shouldIncludeFinalTexturesInVisibleSet;
    CALayer *_alternateLayer;
    TSDBitmapRenderingQualityInfo *_bitmapRenderingQualityInfo;
    NSMapTable *_boundingRectForStageMap;
    CGColorSpace _colorSpace;
    long long _maxStageIndex;
    long long _objectType;
    TSDRep *_rep;
    double _textureOpacity;
    double _textureAngle;
    double _textureAnimationPercent;
    CGPoint _center;
    CGPoint _originalPosition;
    CGRect _boundingRect;
}

+ (id)newFlattenedTextureFromTextures:(id)arg1 newRect:(CGRect)arg2;
@property(nonatomic) long long textureZOrder; // @synthesize textureZOrder=_textureZOrder;
@property(nonatomic) double textureAnimationPercent; // @synthesize textureAnimationPercent=_textureAnimationPercent;
@property(nonatomic) double textureAngle; // @synthesize textureAngle=_textureAngle;
@property(nonatomic) double textureOpacity; // @synthesize textureOpacity=_textureOpacity;
@property(nonatomic) __weak TSDRep *rep; // @synthesize rep=_rep;
@property(nonatomic) BOOL shouldIncludeFinalTexturesInVisibleSet; // @synthesize shouldIncludeFinalTexturesInVisibleSet=_shouldIncludeFinalTexturesInVisibleSet;
@property(nonatomic) BOOL shouldTransformUsingTextureCenter; // @synthesize shouldTransformUsingTextureCenter=_shouldTransformUsingTextureCenter;
@property(nonatomic) CGPoint originalPosition; // @synthesize originalPosition=_originalPosition;
@property(nonatomic) long long objectType; // @synthesize objectType=_objectType;
@property(readonly, nonatomic) long long maxStageIndex; // @synthesize maxStageIndex=_maxStageIndex;
@property(nonatomic) BOOL isMagicMove; // @synthesize isMagicMove=_isMagicMove;
@property(nonatomic) BOOL containsContentBuildTextures; // @synthesize containsContentBuildTextures=_containsContentBuildTextures;
@property(nonatomic) BOOL isFlippedHorizontally; // @synthesize isFlippedHorizontally=_isFlippedHorizontally;
@property(nonatomic) BOOL isBaked; // @synthesize isBaked=_isBaked;
@property(nonatomic) BOOL isBackground; // @synthesize isBackground=_isBackground;
@property(nonatomic) CGPoint center; // @synthesize center=_center;
@property(nonatomic) CGColorSpace colorSpace; // @synthesize colorSpace=_colorSpace;
@property(copy, nonatomic) NSMapTable *boundingRectForStageMap; // @synthesize boundingRectForStageMap=_boundingRectForStageMap;
@property(readonly, nonatomic) CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(nonatomic) TSDBitmapRenderingQualityInfo *bitmapRenderingQualityInfo; // @synthesize bitmapRenderingQualityInfo=_bitmapRenderingQualityInfo;
@property(retain, nonatomic) CALayer *alternateLayer; // @synthesize alternateLayer=_alternateLayer;
@property(readonly, nonatomic) NSArray *allTextures; // @synthesize allTextures=_allTextures;
// - (void).cxx_destruct;
- (void)drawFrameWithMetalContext:(id)arg1;
- (id)description;
- (id)viewLayerAtEventIndex:(NSUInteger)arg1;
- (void)removeAllPerspectiveLayers;
- (void)addPerspectiveLayerToTexture:(id)arg1 withShowSize:(CGSize)arg2;
- (void)resetLayers;
- (void)resetToOriginalSourceAtEventIndex:(NSUInteger)arg1;
- (void)evictRenderedResources;
@property(readonly, nonatomic) BOOL isRenderable;
- (void)renderIntoContext:(CGContext )arg1 eventIndex:(NSUInteger)arg2 requiresTransparentBackground:(BOOL)arg3;
- (CGRect)p_frameAtEventIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) CGRect frame;
- (void)setBoundingRect:(CGRect)arg1 forStage:(long long)arg2;
- (BOOL)isBackgroundTexture:(id)arg1;
- (void)applyActionEffect:(id)arg1 viewScale:(double)arg2 isMagicMove:(BOOL)arg3 shouldBake:(BOOL)arg4 applyScaleOnly:(BOOL)arg5 ignoreScale:(BOOL)arg6 shouldCheckActionKeys:(BOOL)arg7 eventIndex:(NSUInteger)arg8;
- (BOOL)p_areAttributes:(id)arg1 equalToAttributes:(id)arg2;
- (void)p_getComponentsOpacity:(double )arg1 scale:(double )arg2 angle:(double )arg3 fromAttributes:(id)arg4 shouldApplyOpacity:(BOOL )arg5 shouldApplyAngle:(BOOL )arg6 shouldApplyScale:(BOOL )arg7;
- (void)p_applyPositionFromAttributes:(id)arg1 viewScale:(double)arg2 eventIndex:(NSUInteger)arg3;
- (void)p_resetAttributesWithViewScale:(double)arg1 eventIndex:(NSUInteger)arg2;
- (void)resetAnchorPointAtEventIndex:(NSUInteger)arg1;
- (void)adjustAnchorPointRelativeToCenterOfRotationAtEventIndex:(NSUInteger)arg1;
- (void)p_setLayerGeometryWithLayer:(id)arg1;
- (void)setLayerGeometry;
- (void)setLayerGeometryAtEventIndex:(NSUInteger)arg1;
- (void)hideLayersOfFinalTexturesAtEventIndex:(NSUInteger)arg1;
- (id)finalTexturesForStage:(long long)arg1;
- (long long)stageIndexForTexture:(id)arg1;
- (id)visibleTexturesWithTextureType:(long long)arg1;
- (id)firstVisibleTextureForTextureType:(long long)arg1;
- (void)removeRenderable:(id)arg1;
- (BOOL)hasTexture:(id)arg1 beenFlattenedForKey:(id)arg2;
- (id)p_insertNewFlattenedTextureWithArray:(id)arg1 rect:(CGRect)arg2 stage:(long long)arg3 insertAfter:(id)arg4 flattenKey:(id)arg5;
- (id)visibleTexturesBeforeStage:(long long)arg1 isBuildIn:(BOOL)arg2 isContentBuild:(BOOL)arg3 shouldFlatten:(BOOL)arg4 flattenKey:(id)arg5;
- (id)visibleTexturesForStage:(long long)arg1 isBuildIn:(BOOL)arg2 isContentBuild:(BOOL)arg3 shouldFlatten:(BOOL)arg4 flattenKey:(id)arg5;
@property(readonly, nonatomic) NSArray *visibleTextures;
- (void)renderLayerContentsIfNeeded;
@property(readonly, nonatomic) BOOL isImageSource;
@property(readonly, nonatomic) BOOL containsFinalTextures;
- (void)addFinalTexture:(id)arg1 forStage:(long long)arg2;
- (void)p_addRenderable:(id)arg1 forStage:(long long)arg2 shouldAdjustBounds:(BOOL)arg3;
- (void)addRenderable:(id)arg1 forStage:(long long)arg2;
- (void)addRenderable:(id)arg1 shouldAdjustBounds:(BOOL)arg2;
- (void)addRenderable:(id)arg1;
- (CGRect)boundingRectForStage:(long long)arg1 isBuildIn:(BOOL)arg2 isContentBuild:(BOOL)arg3;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (void)releaseSingleTextures;
- (void)teardown;
- (id)init;

@end

