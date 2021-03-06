//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSWPOffscreenColumn-Protocol.h>

@class NSMutableArray, TSWPStorage;
@protocol TSWPStyleProvider;

__attribute__((visibility("hidden")))
@interface TSWPColumn : NSObject <TSWPOffscreenColumn>
{
    TSWPStorage *_storage;
    CGRect _frameBounds;
    CGAffineTransform _transform;
    NSUInteger _startCharIndex;
    NSUInteger _characterCount;
    _NSRange _anchoredAttachmentRange;
    NSUInteger _nextWidowPullsDownFromCharIndex;
    double _contentBottom;
    double _erasableContentBottom;
    double _nextLinePosition;
    NSUInteger _layoutResultFlags;
    NSUInteger _columnIndex;
    NSUInteger _pageNumber;
    NSUInteger _scaleTextPercent;
    id <TSWPStyleProvider> _styleProvider;
    shared_ptr_1a254aea _lineFragmentArray;
    NSUInteger _storageChangeCount;
    NSMutableArray *_paragraphAdornments;
    BOOL _textIsVertical;
}

+ (BOOL)partitionedAttachmentStartsAtCharIndex:(NSUInteger)arg1 withColumns:(id)arg2;
+ (CGRect)labelRectForCharIndex:(NSUInteger)arg1 withColumns:(id)arg2;
+ (CGRect)columnRectForRange:(_NSRange)arg1 withColumns:(id)arg2;
+ (CGPoint)pinPoint:(CGPoint)arg1 toBottomOfLineFragmentInColumns:(id)arg2;
+ (CGSize)layoutSizeForParagraphEnumerator:(const struct TSWPParagraphEnumerator )arg1 inColumns:(id)arg2 lineCount:(out NSUInteger )arg3 nextLineOffset:(out double )arg4;
+ (_NSRange)rangeOfColumns:(id)arg1;
+ (id)columnForCharIndex:(NSUInteger)arg1 allowEndOfColumn:(BOOL)arg2 withColumns:(id)arg3;
+ (CGRect)boundsRectForSelection:(id)arg1 columnArray:(id)arg2 includeRuby:(BOOL)arg3 includePaginatedAttachments:(BOOL)arg4;
+ (id)pathForHighlightWithRange:(_NSRange)arg1 columnArray:(id)arg2 pathStyle:(int)arg3;
+ (id)footnoteReferenceAttachmentInColumnArray:(id)arg1 atPoint:(CGPoint)arg2;
+ (id)footnoteMarkAttachmentInColumnArray:(id)arg1 atPoint:(CGPoint)arg2;
+ (id)smartFieldWithAttributeKind:(NSUInteger)arg1 inColumnArray:(id)arg2 atPoint:(CGPoint)arg3;
+ (NSUInteger)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 pastCenterGoesToNextChar:(BOOL)arg4 constrainToAscentAndDescent:(BOOL)arg5 isAtEndOfLine:(BOOL )arg6 leadingEdge:(BOOL )arg7 ignoreEmptyColumns:(BOOL)arg8 inLayoutTarget:(id)arg9;
+ (NSUInteger)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 pastCenterGoesToNextChar:(BOOL)arg4 constrainToAscentAndDescent:(BOOL)arg5 isAtEndOfLine:(BOOL )arg6 leadingEdge:(BOOL )arg7 inLayoutTarget:(id)arg8;
+ (NSUInteger)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 pastCenterGoesToNextChar:(BOOL)arg4 isAtEndOfLine:(BOOL )arg5 leadingEdge:(BOOL )arg6 inLayoutTarget:(id)arg7;
+ (NSUInteger)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 constrainToAscentAndDescent:(BOOL)arg4 isAtEndOfLine:(BOOL )arg5 leadingEdge:(BOOL )arg6 inLayoutTarget:(id)arg7;
+ (NSUInteger)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 isAtEndOfLine:(BOOL )arg4 leadingEdge:(BOOL )arg5 inLayoutTarget:(id)arg6;
+ (NSUInteger)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 constrainToAscentAndDescent:(BOOL)arg3 isAtEndOfLine:(BOOL )arg4 inLayoutTarget:(id)arg5;
+ (NSUInteger)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 isAtEndOfLine:(BOOL )arg3 inLayoutTarget:(id)arg4;
+ (NSUInteger)charIndexForPointWithPinning:(CGPoint)arg1 isTail:(BOOL)arg2 selectionType:(int)arg3 inLayoutTarget:(id)arg4;
+ (NSUInteger)charIndexForPointWithPinning:(CGPoint)arg1 constrainToAscentAndDescent:(BOOL)arg2 inLayoutTarget:(id)arg3;
+ (NSUInteger)charIndexForPointWithPinning:(CGPoint)arg1 inLayoutTarget:(id)arg2;
+ (CGPoint)pinToNaturalBounds:(CGPoint)arg1 andLastLineFragment:(BOOL)arg2 inLayoutTarget:(id)arg3;
+ (CGPoint)p_pinPoint:(CGPoint)arg1 toRect:(CGRect)arg2;
+ (NSUInteger)charIndexForPoint:(CGPoint)arg1 inColumnsArray:(id)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 pastCenterGoesToNextChar:(BOOL)arg5 constrainToAscentAndDescent:(BOOL)arg6 ignoreEmptyColumns:(BOOL)arg7 isAtEndOfLine:(BOOL )arg8 leadingEdge:(BOOL )arg9;
+ (NSUInteger)charIndexForPoint:(CGPoint)arg1 inColumnsArray:(id)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 pastCenterGoesToNextChar:(BOOL)arg5 ignoreEmptyColumns:(BOOL)arg6 isAtEndOfLine:(BOOL )arg7 leadingEdge:(BOOL )arg8;
+ (NSUInteger)charIndexForPoint:(CGPoint)arg1 inColumnsArray:(id)arg2 allowPastBreak:(BOOL)arg3 allowNotFound:(BOOL)arg4 ignoreEmptyColumns:(BOOL)arg5 isAtEndOfLine:(BOOL )arg6 leadingEdge:(BOOL )arg7;
+ (_NSRange)charRangeForPencilAnnotationStartPoint:(CGPoint)arg1 toEndPoint:(CGPoint)arg2 inLayoutTarget:(id)arg3 onSingleLineFragment:(BOOL)arg4;
+ (id)closestColumnInColumnsArray:(id)arg1 forPoint:(CGPoint)arg2 ignoreEmptyColumns:(BOOL)arg3 ignoreDrawableOnlyColumns:(BOOL)arg4;
+ (CGPoint)connectionLinePointForChangeRange:(_NSRange)arg1 withColumns:(id)arg2 layoutTarget:(id)arg3;
+ (id)commentKnobBaseOriginForHighlightAtTextRange:(_NSRange)arg1 withColumns:(id)arg2;
+ (id)selectionRectsforColumns:(id)arg1 forSelection:(id)arg2;
+ (CGRect)rectForSelection:(id)arg1 withColumns:(id)arg2 useParagraphModeRects:(BOOL)arg3;
+ (CGRect)rectForSelection:(id)arg1 withColumns:(id)arg2;
+ (CGRect)caretRectForInsertionPoint:(id)arg1 withColumns:(id)arg2;
+ (id)pageAnchorDetailsForPencilAnnotationAtTextSelection:(id)arg1 withType:(long long)arg2 inLayout:(id)arg3;
+ (CDStruct_1af65ba2)pencilAnnotationLineMetricsAtCharIndex:(NSUInteger)arg1 withColumns:(id)arg2;
+ (id)pencilAnnotationRectsForSelection:(id)arg1 withColumns:(id)arg2 outRanges:(id )arg3;
+ (id)contentRectsToAvoidPencilAnnotationOverlapWithColumns:(id)arg1;
@property(nonatomic) NSUInteger storageChangeCount; // @synthesize storageChangeCount=_storageChangeCount;
@property(nonatomic) BOOL textIsVertical; // @synthesize textIsVertical=_textIsVertical;
@property(nonatomic) __weak id <TSWPStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) NSUInteger scaleTextPercent; // @synthesize scaleTextPercent=_scaleTextPercent;
@property(nonatomic) NSUInteger pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) NSUInteger columnIndex; // @synthesize columnIndex=_columnIndex;
@property(nonatomic) NSUInteger layoutResultFlags; // @synthesize layoutResultFlags=_layoutResultFlags;
@property(nonatomic) double erasableContentBottom; // @synthesize erasableContentBottom=_erasableContentBottom;
@property(nonatomic) double nextLinePosition; // @synthesize nextLinePosition=_nextLinePosition;
@property(nonatomic) double contentBlockBottom; // @synthesize contentBlockBottom=_contentBottom;
@property(nonatomic) NSUInteger nextWidowPullsDownFromCharIndex; // @synthesize nextWidowPullsDownFromCharIndex=_nextWidowPullsDownFromCharIndex;
@property(nonatomic) NSUInteger characterCount; // @synthesize characterCount=_characterCount;
@property(nonatomic) NSUInteger startCharIndex; // @synthesize startCharIndex=_startCharIndex;
@property(nonatomic) CGAffineTransform transformFromWP; // @synthesize transformFromWP=_transform;
@property(nonatomic) CGRect wpBounds; // @synthesize wpBounds=_frameBounds;
@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)enumerateParagraphAdornmentsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)layoutsForInlineDrawables:(id)arg1;
- (BOOL)hasPartitionedAttachmentAtStart:(BOOL)arg1;
- (BOOL)isLastLineFragmentPartitioned;
- (BOOL)onlyHasPartitionedAttachments;
- (BOOL)onlyHasAnchoredDrawable;
- (id)singleLinePartitionedInfoAtStart:(BOOL)arg1;
- (id)partitionedLayoutForInfo:(id)arg1;
- (id)smartFieldAtCharIndex:(NSUInteger)arg1 attributeKind:(NSUInteger)arg2;
- (void)renderWithRenderer:(id)arg1 currentSelection:(id)arg2 limitSelection:(id)arg3 listRange:(_NSRange)arg4 rubyGlyphRange:(_NSRange)arg5 isCanvasInteractive:(BOOL)arg6 isInDrawingMode:(BOOL)arg7 suppressedMisspellingRange:(_NSRange)arg8 blackAndWhite:(BOOL)arg9 dictationInterpretations:(id)arg10 autocorrections:(id)arg11 markedRange:(_NSRange)arg12 markedText:(id)arg13 renderMode:(int)arg14 pageCount:(NSUInteger)arg15 suppressInvisibles:(BOOL)arg16 suppressFontSmoothing:(BOOL)arg17 currentCanvasSelection:(id)arg18;
- (struct _TSWPCharIndexAndPosition)calcAttachmentPositionForDrawable:(id)arg1 atPoint:(CGPoint)arg2 inTextLayoutTarget:(id)arg3 startOfBoundsInfluencingWrap:(CGPoint)arg4 wrapOutset:(CGSize)arg5 wrapMargin:(double)arg6 makeInline:(BOOL)arg7;
- (BOOL)p_pencilAnnotationsShouldSkipLineFragment:(const struct TSWPLineFragment )arg1;
- (NSUInteger)p_charIndexWithTextClosestToWPPoint:(CGPoint)arg1 pastCenterGoesToNextChar:(BOOL)arg2 outFragment:(const struct TSWPLineFragment )arg3 leadingEdge:(BOOL )arg4;
- (NSUInteger)charIndexFromWPPoint:(CGPoint)arg1 pastCenterGoesToNextChar:(BOOL)arg2 allowNotFound:(BOOL)arg3 constrainToAscentAndDescent:(BOOL)arg4 outFragment:(const struct TSWPLineFragment )arg5 leadingEdge:(BOOL )arg6;
- (NSUInteger)charIndexForSelectionFromPoint:(CGPoint)arg1 isTail:(BOOL)arg2;
- (NSUInteger)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 constrainToAscentAndDescent:(BOOL)arg5 isAtEndOfLine:(BOOL )arg6 outFragment:(const struct TSWPLineFragment )arg7 leadingEdge:(BOOL )arg8;
- (NSUInteger)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL )arg5 outFragment:(const struct TSWPLineFragment )arg6 leadingEdge:(BOOL )arg7;
- (NSUInteger)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 isAtEndOfLine:(BOOL )arg5 leadingEdge:(BOOL )arg6;
- (NSUInteger)charIndexFromPoint:(CGPoint)arg1 allowPastBreak:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 allowNotFound:(BOOL)arg4 constrainToAscentAndDescent:(BOOL)arg5 isAtEndOfLine:(BOOL )arg6 leadingEdge:(BOOL )arg7;
- (id)drawableIntersectionRectsForSelection:(id)arg1 inTarget:(id)arg2;
- (CGRect)erasableRectForSelectionRange:(_NSRange)arg1;
- (id)rectsForSelection:(id)arg1 ranges:(id )arg2 includePaginatedAttachments:(BOOL)arg3;
- (id)rectsForSelection:(id)arg1 ranges:(id )arg2;
- (id)rectsForSelectionRange:(_NSRange)arg1 selectionType:(int)arg2 forParagraphMode:(BOOL)arg3 includeRuby:(BOOL)arg4 includePaginatedAttachments:(BOOL)arg5;
- (id)rectsForSelectionRanges:(id)arg1 selectionType:(int)arg2;
- (id)pTransformReturnRects:(id)arg1;
- (id)pMutableRectsForSelectionRange:(_NSRange)arg1 selectionType:(int)arg2 includeSpaceAfter:(BOOL)arg3 includeSpaceBefore:(BOOL)arg4 includeLeading:(BOOL)arg5 forParagraphMode:(BOOL)arg6 includeRuby:(BOOL)arg7 includePaginatedAttachments:(BOOL)arg8 inranges:(id)arg9 outranges:(id )arg10;
- (const struct TSWPLineFragment )pColumnEndingPartitionedLineFragmentInSelectionRange:(_NSRange)arg1;
- (CGRect)firstRectForSelection:(id)arg1 includeSpaceAfter:(BOOL)arg2 includeSpaceBefore:(BOOL)arg3 includeLeading:(BOOL)arg4;
- (BOOL)p_isFirstPartitionForCharIndex:(NSUInteger)arg1;
- (id)lineSelectionsForSelection:(id)arg1;
@property(readonly, nonatomic) CGRect typographicBounds;
- (CGRect)columnRectForRange:(_NSRange)arg1;
- (NSUInteger)glyphCountForRubyFieldAtCharIndex:(NSUInteger)arg1;
- (CGRect)glyphRectForRubyFieldAtCharIndex:(NSUInteger)arg1 glyphRange:(_NSRange)arg2;
- (unsigned int)fontTraitsForRange:(_NSRange)arg1 includingLabel:(BOOL)arg2;
- (CGRect)glyphRectForRange:(_NSRange)arg1 includingLabel:(BOOL)arg2;
- (CGRect)caretRectForSelection:(id)arg1;
- (NSUInteger)lineIndexForCharIndex:(NSUInteger)arg1 eol:(BOOL)arg2;
- (NSUInteger)pRemapCharIndex:(NSUInteger)arg1 outIsAfterBreak:(out BOOL )arg2 outWithTextSource:(out id )arg3;
- (void)pInfoForCharIndex:(NSUInteger)arg1 isAtStart:(out BOOL )arg2 isAtEnd:(out BOOL )arg3;
- (const struct TSWPLineFragment )nearestLineFragmentWithSameVerticalPositionAs:(NSUInteger)arg1 xPos:(double)arg2;
- (double)horizontalOffsetForCharIndex:(NSUInteger)arg1 lineFragmentIndex:(NSUInteger)arg2 bumpPastHyphen:(BOOL)arg3 allowPastLineBounds:(BOOL)arg4;
- (CDStruct_1af65ba2)lineMetricsAtCharIndex:(NSUInteger)arg1 allowEndOfLine:(BOOL)arg2;
- (unsigned int)hyphenCharOfLineFragmentAtIndex:(NSUInteger)arg1;
- (_NSRange)rangeOfLineFragmentAtIndex:(NSUInteger)arg1;
- (double)baselineOfLineFragmentAtIndex:(NSUInteger)arg1;
- (CGRect)boundsOfLineFragmentAtIndex:(NSUInteger)arg1;
- (void)makeEmpty:(NSUInteger)arg1 anchoredRange:(_NSRange)arg2 layoutResultFlags:(NSUInteger)arg3;
- (NSUInteger)lineFragmentCountForBaseline:(double)arg1;
- (void)offsetLineFragmentsBy:(CGSize)arg1;
- (const struct TSWPLineFragment )lineFragmentAtIndex:(NSUInteger)arg1;
- (void)setLineFragmentArray:(const shared_ptr_1a254aea )arg1;
- (const shared_ptr_1a254aea )lineFragmentArrayForUnitTests;
- (const shared_ptr_1a254aea )lineFragmentArray;
@property(readonly, nonatomic) NSUInteger lineCount;
@property(readonly, nonatomic) CGAffineTransform transformToWP;
@property(readonly, nonatomic) CGRect frameBounds;
- (void)clearAdornments;
- (void)addAdornmentRect:(id)arg1;
- (CGRect)changeBarRectForLineFragment:(const struct TSWPLineFragment )arg1 layoutTarget:(id)arg2;
- (BOOL)requiresGlyphVectorsForHeightMeasurement;
- (double)textHeight;
@property(readonly, nonatomic) double textBlockBottom;
- (CGRect)erasableBounds:(NSUInteger)arg1;
- (double)minimumHeightForLayoutOnPage;
- (void)trimToCharIndex:(NSUInteger)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(NSUInteger)arg3 removeAutoNumberFootnoteCount:(NSUInteger)arg4;
- (CGSize)maxSize;
- (void)incrementRanges:(long long)arg1 startingAt:(NSUInteger)arg2;
@property(nonatomic) _NSRange anchoredRange;
- (NSUInteger)anchoredCharCount;
- (NSUInteger)startAnchoredCharIndex;
@property(nonatomic) _NSRange range;
- (double)logicalBoundsBottom;
- (double)logicalBoundsTop;
- (void)dealloc;
- (id)initForTestingWithStorage:(id)arg1 frameBounds:(CGRect)arg2;
- (id)initWithStorage:(id)arg1 frameBounds:(CGRect)arg2;
@property(readonly, nonatomic) BOOL terminatedByBreak;
@property(readonly, nonatomic) BOOL lastLineIsEmptyAndHasListLabel;

@end

