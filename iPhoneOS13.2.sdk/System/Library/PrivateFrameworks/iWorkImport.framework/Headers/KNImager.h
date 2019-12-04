//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDImager.h>

#import <iWorkImport/TSDConnectedInfoReplacing-Protocol.h>

@class KNAbstractSlide, KNBodyPlaceholderInfo, KNTitlePlaceholderInfo, NSString, TSUImage;
@protocol TSDCanvasProxyDelegate;

__attribute__((visibility("hidden")))
@interface KNImager : TSDImager <TSDConnectedInfoReplacing>
{
    _Bool _shouldShowInstructionalText;
    KNBodyPlaceholderInfo *_replacementBodyPlaceholder;
    KNTitlePlaceholderInfo *_replacementTitlePlaceholder;
    _Bool _shouldTintWhiteImages;
    unsigned long long _slideNumber;
    KNAbstractSlide *_slide;
    double _drawableThumbnailContentInset;
    struct CGSize _drawableThumbnailSize;
}

@property(nonatomic) _Bool shouldTintWhiteImages; // @synthesize shouldTintWhiteImages=_shouldTintWhiteImages;
@property(nonatomic) double drawableThumbnailContentInset; // @synthesize drawableThumbnailContentInset=_drawableThumbnailContentInset;
@property(nonatomic) struct CGSize drawableThumbnailSize; // @synthesize drawableThumbnailSize=_drawableThumbnailSize;
@property(nonatomic) _Bool shouldShowInstructionalText; // @synthesize shouldShowInstructionalText=_shouldShowInstructionalText;
@property(retain, nonatomic) KNBodyPlaceholderInfo *replacementBodyPlaceholder; // @synthesize replacementBodyPlaceholder=_replacementBodyPlaceholder;
@property(retain, nonatomic) KNTitlePlaceholderInfo *replacementTitlePlaceholder; // @synthesize replacementTitlePlaceholder=_replacementTitlePlaceholder;
@property(nonatomic) __weak KNAbstractSlide *slide; // @synthesize slide=_slide;
@property(nonatomic) unsigned long long slideNumber; // @synthesize slideNumber=_slideNumber;
- (double)p_sizeMultiplierForDrawable:(id)arg1;
- (double)p_strokeWidthForScaleFactor:(double)arg1 drawable:(id)arg2;
- (id)p_strokeForShapeInfo:(id)arg1;
- (_Bool)p_requiresModifiedStrokeForDrawable:(id)arg1 atScaleFactor:(double)arg2;
- (void)p_prepareShapeInfoStroke:(id)arg1 atScaleFactor:(double)arg2 finalRect:(struct CGRect *)arg3;
- (void)p_prepareStyledInfoStyle:(id)arg1;
@property(readonly, nonatomic) TSUImage *drawableThumbnailImage;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;
- (_Bool)isInfoAKeynoteMasterObject:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) id <TSDCanvasProxyDelegate> canvasProxyDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
