//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPShapeRep.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface TSWPTOCRep : TSWPShapeRep
{
    CAShapeLayer *_selectionHighlightLayer;
}

+ (id)TOCReferenceNameWithParagraphIndex:(unsigned long long)arg1;
- (unsigned long long)i_indexOfHitTOCEntryAtPoint:(struct CGPoint)arg1;
- (id)i_paragraphStyleAtPoint:(struct CGPoint)arg1;
- (id)hyperlinkRegions;
- (_Bool)canMakePathEditable;
- (_Bool)shouldShowKnobs;
- (_Bool)shouldCreateKnobs;
- (id)paragraphStylesBetweenCharIndex:(unsigned long long)arg1 andCharIndex:(unsigned long long)arg2;
- (unsigned long long)charIndexAtPoint:(struct CGPoint)arg1;
- (id)tocInfo;

@end
