//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHRenderer.h>

__attribute__((visibility("hidden")))
@interface TSCHLegendRenderer : TSCHRenderer
{
    CGPoint _textEditingPixelAlignmentOffset;
}

@property(nonatomic) CGPoint textEditingPixelAlignmentOffset; // @synthesize textEditingPixelAlignmentOffset=_textEditingPixelAlignmentOffset;
- (void)addSelection:(id)arg1 toCGPath:(CGPath )arg2 useWrapWidth:(BOOL)arg3;
- (void)renderIntoContext:(CGContext )arg1 selection:(id)arg2;
- (BOOL)canRenderSelectionPath:(id)arg1;
- (void)p_renderIntoContext:(CGContext )arg1 visible:(CGRect)arg2;
- (void)p_drawLabelForCell:(id)arg1 intoContext:(CGContext )arg2 rangePtr:(_NSRange )arg3;
- (void)p_drawBadgeForCell:(id)arg1 intoContext:(CGContext )arg2;
- (void)p_draw3DLineBadgeIntoContext:(CGContext )arg1 forCell:(id)arg2;
- (void)p_drawDonutBadgeIntoContext:(CGContext )arg1 forCell:(id)arg2;
- (void)p_drawPieBadgeIntoContext:(CGContext )arg1 forCell:(id)arg2;
- (void)p_drawLineAreaBadgeIntoContext:(CGContext )arg1 forCell:(id)arg2;
- (void)p_drawDefaultBadgeIntoContext:(CGContext )arg1 forCell:(id)arg2;
- (id)p_selectionPathForCell:(id)arg1;

@end

