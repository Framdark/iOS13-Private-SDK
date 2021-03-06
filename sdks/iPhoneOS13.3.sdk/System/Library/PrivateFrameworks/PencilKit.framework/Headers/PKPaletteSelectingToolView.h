//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKPaletteToolView.h>

#import <PencilKit/PKPaletteInkingTool-Protocol.h>
#import <PencilKit/PKPaletteSelectingTool-Protocol.h>

@class PKInk;
@protocol PKPaletteInkingTool;

@interface PKPaletteSelectingToolView : PKPaletteToolView <PKPaletteInkingTool, PKPaletteSelectingTool>
{
    id <PKPaletteInkingTool> _inkTool;
}

@property(retain, nonatomic) id <PKPaletteInkingTool> inkTool; // @synthesize inkTool=_inkTool;
// - (void).cxx_destruct;
- (id)attributeViewController;
- (void)setInkWeight:(double)arg1;
- (void)setInkColor:(id)arg1;
@property(readonly, nonatomic) PKInk *ink;
- (void)setSelected:(BOOL)arg1;
- (id)initWithToolIdentifier:(id)arg1;

@end

