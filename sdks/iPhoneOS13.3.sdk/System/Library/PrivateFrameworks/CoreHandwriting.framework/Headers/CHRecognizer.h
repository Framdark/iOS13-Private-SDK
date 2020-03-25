//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/CHRecognizing-Protocol.h>

@class CHCutpointModel, CHDrawing, CHPatternNetwork, CHRecognitionInsight, CHRecognitionInsightRequest, CHRecognizerConfiguration, CHSpellChecker, CHStrokeTransitionModel, NSArray, NSCharacterSet, NSDictionary, NSLocale, NSMutableDictionary, NSMutableIndexSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface CHRecognizer : NSObject <CHRecognizing>
{
    CHRecognitionInsightRequest *_nextRecognitionInsightRequest;
    CHRecognitionInsight *_activeRecognitionInsight;
    NSArray *_whitelistMecabraRareCharacters;
    BOOL _saveDrawingUntilNextCandidateAccepted;
    int _recognitionType;
    NSUInteger _maxRecognitionResultCount;
    NSCharacterSet *_activeCharacterSet;
    struct CHNeuralNetwork _engine;
    struct CHNeuralNetwork _freeformEngine;
    CHStrokeTransitionModel *_strokeTransitionModel;
    CHCutpointModel *_cutpointModel;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
    struct Network _radicalClusterFST;
    struct Network _formatGrammarFST;
    CHPatternNetwork *_patternFST;
    CHRecognizerConfiguration *_configuration;
    void _languageModel;
    void _lmVocabulary;
    void _characterLanguageModel;
    struct __Mecabra _mecabra;
    void _cjkStaticLexicon;
    void _cjkDynamicLexicon;
    struct _LXLexicon _staticLexicon;
    struct _LXLexicon _customLexicon;
    NSDictionary *_textReplacements;
    NSMutableDictionary *_textReplacementLowercasedKeyMapping;
    CHSpellChecker *_spellChecker;
    struct _CFBurstTrie _ovsTrie;
    NSURL *_learningDictionaryURL;
    CHDrawing *_savedDrawing;
    NSString *_savedTop1CandidateString;
    CHDrawing *_cachedDrawing;
    struct VariantMap _transliterationVariantMap;
    void _icuTransliterator;
    NSUInteger _lastCharacterSegmentCount;
    NSMutableIndexSet *_lastCharacterSegmentIndexes;
    CGSize _minimumDrawingSize;
    map_107962fc _cachedResults;
    map_c92806bd _characterIDMap;
}

+ (NSUInteger)_decodeTempDelayedSegmentID:(NSUInteger)arg1;
+ (NSUInteger)_encodeTempDelayedSegmentID:(NSUInteger)arg1;
+ (double)_computeEditPenalizationFromString:(id)arg1 toReferenceString:(id)arg2 withSuffix:(id)arg3 withCaseSensitivity:(BOOL)arg4 withFirstLetterCaseSensitivity:(BOOL)arg5 withDiacriticSensitivity:(BOOL)arg6 withDiacriticsCharSet:(id)arg7 withConsumableStrokesCharSet:(id)arg8 outputSuffix:(id )arg9 lexiconExtraCharacters:(id )arg10 firstLetterCaseFlipped:(BOOL )arg11;
+ (BOOL)_isLocaleSupported:(id)arg1 withMode:(int)arg2;
@property(retain, nonatomic) NSMutableIndexSet *lastCharacterSegmentIndexes; // @synthesize lastCharacterSegmentIndexes=_lastCharacterSegmentIndexes;
@property(nonatomic) NSUInteger lastCharacterSegmentCount; // @synthesize lastCharacterSegmentCount=_lastCharacterSegmentCount;
@property(nonatomic) void icuTransliterator; // @synthesize icuTransliterator=_icuTransliterator;
@property(nonatomic) struct VariantMap transliterationVariantMap; // @synthesize transliterationVariantMap=_transliterationVariantMap;
@property(nonatomic) map_c92806bd characterIDMap; // @synthesize characterIDMap=_characterIDMap;
@property(nonatomic) map_107962fc cachedResults; // @synthesize cachedResults=_cachedResults;
@property(copy, nonatomic) CHDrawing *cachedDrawing; // @synthesize cachedDrawing=_cachedDrawing;
@property(nonatomic) BOOL saveDrawingUntilNextCandidateAccepted; // @synthesize saveDrawingUntilNextCandidateAccepted=_saveDrawingUntilNextCandidateAccepted;
@property(copy, nonatomic) NSString *savedTop1CandidateString; // @synthesize savedTop1CandidateString=_savedTop1CandidateString;
@property(copy, nonatomic) CHDrawing *savedDrawing; // @synthesize savedDrawing=_savedDrawing;
@property(retain, nonatomic) NSURL *learningDictionaryURL; // @synthesize learningDictionaryURL=_learningDictionaryURL;
@property(nonatomic) struct _CFBurstTrie ovsTrie; // @synthesize ovsTrie=_ovsTrie;
@property(retain, nonatomic) CHSpellChecker *spellChecker; // @synthesize spellChecker=_spellChecker;
@property(retain, nonatomic) NSMutableDictionary *textReplacementLowercasedKeyMapping; // @synthesize textReplacementLowercasedKeyMapping=_textReplacementLowercasedKeyMapping;
@property(retain, nonatomic) NSDictionary *textReplacements; // @synthesize textReplacements=_textReplacements;
@property(nonatomic) struct _LXLexicon customLexicon; // @synthesize customLexicon=_customLexicon;
@property(nonatomic) struct _LXLexicon staticLexicon; // @synthesize staticLexicon=_staticLexicon;
@property(nonatomic) void cjkDynamicLexicon; // @synthesize cjkDynamicLexicon=_cjkDynamicLexicon;
@property(nonatomic) void cjkStaticLexicon; // @synthesize cjkStaticLexicon=_cjkStaticLexicon;
@property(nonatomic) struct __Mecabra mecabra; // @synthesize mecabra=_mecabra;
@property(nonatomic) void characterLanguageModel; // @synthesize characterLanguageModel=_characterLanguageModel;
@property(nonatomic) void lmVocabulary; // @synthesize lmVocabulary=_lmVocabulary;
@property(nonatomic) void languageModel; // @synthesize languageModel=_languageModel;
@property(retain, nonatomic, setter=_setConfiguration:) CHRecognizerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) CHPatternNetwork *patternFST; // @synthesize patternFST=_patternFST;
@property(nonatomic) struct Network formatGrammarFST; // @synthesize formatGrammarFST=_formatGrammarFST;
@property(nonatomic) struct Network radicalClusterFST; // @synthesize radicalClusterFST=_radicalClusterFST;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recognitionQueue; // @synthesize recognitionQueue=_recognitionQueue;
@property(retain, nonatomic) CHCutpointModel *cutpointModel; // @synthesize cutpointModel=_cutpointModel;
@property(retain, nonatomic) CHStrokeTransitionModel *strokeTransitionModel; // @synthesize strokeTransitionModel=_strokeTransitionModel;
@property(nonatomic) struct CHNeuralNetwork freeformEngine; // @synthesize freeformEngine=_freeformEngine;
@property(nonatomic) struct CHNeuralNetwork engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSCharacterSet *activeCharacterSet; // @synthesize activeCharacterSet=_activeCharacterSet;
@property(nonatomic) NSUInteger maxRecognitionResultCount; // @synthesize maxRecognitionResultCount=_maxRecognitionResultCount;
@property(nonatomic) int recognitionType; // @synthesize recognitionType=_recognitionType;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)_setupRecognitionInsightRecording;
@property(nonatomic) BOOL shouldEnableCachingIfAvailable;
@property(nonatomic) int contentType;
@property(copy, nonatomic) NSLocale *locale;
@property(nonatomic) int recognitionMode;
@property(nonatomic) CGSize minimumDrawingSize; // @synthesize minimumDrawingSize=_minimumDrawingSize;
- (NSUInteger)_effectiveMaxRecognitionResultCount;
- (CGRect)_initialContextRectFromRecognizerOptions:(id)arg1;
- (long long)_precedingSpaceBehaviorFromRecognizerOptions:(id)arg1;
- (id)_historyStringFromRecognizerOptions:(id)arg1;
- (void)_rescoreCandidatesWithLanguageModel:(vector_06f11b7b )arg1 history:(id)arg2;
- (unsigned int)_tokenIDForUNKCharacterString:(id)arg1;
- (void)_applyTransliterationAndSyntheticCandidates:(vector_06f11b7b )arg1;
- (id)_applySentenceTransliterationCandidates:(unsigned short )arg1 codesLen:(int)arg2 codesMax:(int)arg3;
- (void)_adjustCandidatesForConfusableCharacters:(vector_06f11b7b )arg1;
- (void)_adjustCandidatesForRomanPunctuation:(vector_06f11b7b )arg1 segmentDrawing:(id)arg2;
- (void)_penalizeCandidatesForRomanPunctuation:(vector_06f11b7b )arg1 punctuationStrokeCount:(long long)arg2;
- (void)_adjustCandidatesForChinesePunctuation:(vector_06f11b7b )arg1 segmentDrawing:(id)arg2 completeDrawing:(id)arg3;
- (void)_refineChineseCharacterCandidates:(vector_06f11b7b )arg1 drawing:(id)arg2;
- (void)_refineCandidates:(vector_06f11b7b )arg1 withAllowedCandidateCodes:(const vector_f672cb0f )arg2;
- (id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2;
- (id)_legacyTextRecognitionResultsForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(id /* CDUnknownBlockType */)arg3;
- (id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(id /* CDUnknownBlockType */)arg3;
- (id)textRecognitionResultForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_shouldReturnDefaultResultsForDrawing:(id)arg1;
- (id)segmentationPointsForDrawing:(id)arg1;
- (id)_segmentWordRangesForSegments:(id)arg1;
- (set_54c7c768)_correctedDelayedStrokeIDs:(const set_54c7c768 )arg1 inDrawing:(id)arg2 segmentationPoints:(id)arg3 correctedSegmentationPoints:(id )arg4;
- (id)_tokenizedTextRecognitionResultForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(id /* CDUnknownBlockType */)arg3;
- (id)_tokenizedTextResultFromResults:(id)arg1 segmentGroup:(id)arg2 offsetSegment:(long long)arg3 decodedStrokeSets:(BOOL)arg4 spaceBehavior:(long long)arg5;
- (id)_resolvedStrokeIndexes:(id)arg1 segmentGroup:(id)arg2 segmentOffset:(long long)arg3 substrokeCount:(long long )arg4;
- (id)_contextTokenIDsFromHistory:(id)arg1 maxCharacterLength:(NSUInteger)arg2 maxTokenCount:(NSUInteger)arg3;
- (void)_calculateBestTranscriptionPaths:(id )arg1 scores:(id )arg2 fromTokenizedResult:(id)arg3 pathCount:(long long)arg4 history:(id)arg5 skipLMRescoring:(BOOL)arg6;
- (id)bestTranscriptionPathsForTokenizedResult:(id)arg1 scores:(id )arg2 history:(id)arg3;
- (double)_lmRescoringWeightForPath:(id)arg1;
- (id)_tokenFromLegacyResult:(id)arg1 wordIndex:(NSUInteger)arg2 strokeSet:(id)arg3 substrokeCount:(long long)arg4;
- (NSUInteger)_mininmumPathCount;
- (basic_string_a1f69cfb)_stringForCode:(unsigned int)arg1;
- (void)_addEdgesFromCandidates:(vector_06f11b7b)arg1 toEdges:(vector_6acbd301 )arg2 referenceEdge:(const struct NetworkEdge )arg3 network:(struct Network )arg4 consumedSegmentCount:(long long)arg5 delayedSegmentIDs:(vector_afed86a5)arg6 numSubstrokes:(long long)arg7;
- (double)_candidateLatticePruningThresholdForEdgeType:(BOOL)arg1;
- (CGRect)_computeLocalFrameWithLeftBounds:(CGRect)arg1 rightBounds:(CGRect)arg2 delayedStrokeDrawingsLocalBounds:(vector_ea45b3ba )arg3 delayedStrokeDrawings:(id)arg4;
- (struct Network)_candidateNetworkFromSegmentationNetwork:(struct Network )arg1 segmentGroup:(id)arg2 drawing:(id)arg3 boundsAtNode:(vector_ea45b3ba )arg4 matchingStrokeRange:(_NSRange)arg5 sortedSegmentIndexes:(vector_afed86a5)arg6 shouldCancel:(id /* CDUnknownBlockType */)arg7;
- (long long)_classifyEdgeDrawingsFromContexts:(id)arg1 allEdges:(vector_6acbd301 )arg2 segmentationNetwork:(struct Network )arg3 candidateNetwork:(struct Network )arg4 cachedEdgeSet:(set_aa516436 )arg5 completeDrawing:(id)arg6 allowSmallerFinalBatch:(BOOL)arg7 shouldCancel:(id /* CDUnknownBlockType */)arg8;
- (id)_textResultWithNetworkComposeFromCandidateNetwork:(struct Network )arg1 segmentGroup:(id)arg2 drawing:(id)arg3 maxRecognitionResultCount:(NSUInteger)arg4 history:(id)arg5 totalStrokeCount:(long long)arg6 totalSubstrokeCount:(long long)arg7;
- (id)_textResultWithLexiconExpansionFromCandidateNetwork:(struct Network )arg1 history:(id)arg2 prefix:(id)arg3 activeHistoryRange:(_NSRange)arg4 rootStaticCursor:(struct _LXCursor )arg5 rootCustomCursor:(struct _LXCursor )arg6 rootPatternCursor:(id)arg7 segmentGroup:(id)arg8 maxRecognitionResultCount:(NSUInteger)arg9 precedingSpaceBehavior:(long long)arg10 shouldPerformNoSpaceRecognition:(BOOL)arg11 inLatticePaths:(vector_7a3f6ffc )arg12 outLatticePaths:(vector_7a3f6ffc )arg13 totalStrokeCount:(long long)arg14 totalSubstrokeCount:(long long)arg15 shouldCancel:(id /* CDUnknownBlockType */)arg16;
- (id)_recognitionResultsForMultipleCharacterDrawing:(id)arg1 segmentGroups:(id)arg2 options:(id)arg3 shouldCancel:(id /* CDUnknownBlockType */)arg4;
- (vector_afed86a5)_sortedIndexesForSegmentGroup:(id)arg1 drawing:(id)arg2;
- (void)_cachingWithMatchingStrokeRange:(_NSRange)arg1 drawing:(id)arg2;
- (unsigned int )_createNetworkTruncatedPrefixStringUsingPrefix:(id)arg1 fullHistoryStringLength:(long long)arg2 hasLexiconCursor:(BOOL)arg3 prefixStringLength:(NSUInteger )arg4 hasComplexChars:(BOOL )arg5 activeHistoryRange:(_NSRange )arg6;
- (void)_filterNonHumanFriendlyCandidates:(id)arg1;
- (void)_adjustResultsForConfusableCharacters:(id)arg1;
- (id)tokenizedTextResultForRomanSingleWordLatticePaths:(const vector_7a3f6ffc )arg1 history:(id)arg2 activeHistoryRange:(_NSRange)arg3 startNode:(long long)arg4 segmentGroup:(id)arg5;
- (id)_addAlternativeCandidatesForTokenizedResult:(id)arg1;
- (id)_spellCheckerCorrectionsForToken:(id)arg1;
- (id)_lexiconCorrectionsForToken:(id)arg1 withLexicon:(struct _LXLexicon )arg2 textReplacements:(id)arg3 consumableStrokesSet:(id)arg4 minimumTokenScore:(double)arg5 activeHistoryRange:(_NSRange)arg6 outBestTokenScore:(double )arg7 shouldCapitalizeWord:(BOOL)arg8;
- (id)tokenizedTextResultForChineseLatticePaths:(const vector_7a3f6ffc )arg1 maximumPathCount:(NSUInteger)arg2 network:(struct Network )arg3 mecabraIDs:(vector_12bd641b )arg4 startNode:(long long)arg5 endNode:(long long)arg6 segmentGroup:(id)arg7;
- (id)tokenizedTextResultForRomanMultiWordsLatticePaths:(const vector_7a3f6ffc )arg1 maximumResultCount:(NSUInteger)arg2 history:(id)arg3 activeHistoryRange:(_NSRange)arg4 startNode:(long long)arg5 segmentGroup:(id)arg6 precedingSpaceBehavior:(long long)arg7;
- (id)tokenizedTextResultForRomanNoSpaceLatticePaths:(const vector_7a3f6ffc )arg1 maximumResultCount:(NSUInteger)arg2 activeHistoryRange:(_NSRange)arg3 precedingSpaceBehavior:(long long)arg4 totalStrokeCount:(long long)arg5 totalSubstrokeCount:(long long)arg6;
- (id)tokenizedTextResultForRomanLatticePaths:(const vector_7a3f6ffc )arg1 history:(id)arg2 activeHistoryRange:(_NSRange)arg3 isMultiWordsPath:(BOOL)arg4 isNoSpacePath:(BOOL)arg5 maximumPathCount:(NSUInteger)arg6 startNode:(long long)arg7 segmentGroup:(id)arg8 precedingSpaceBehavior:(long long)arg9 totalStrokeCount:(long long)arg10 totalSubstrokeCount:(long long)arg11;
- (BOOL)_shouldCapitalizeGivenHistory:(id)arg1;
- (BOOL)_updateResults:(id)arg1 string:(id)arg2 score:(double)arg3 recognitionScore:(double)arg4 lexicalEntry:(BOOL)arg5 patternEntry:(BOOL)arg6 isInappropriateWord:(BOOL)arg7 wordID:(unsigned int)arg8 wordStrokeSet:(id)arg9;
- (id)bestPathsFromNetwork:(struct Network )arg1 pathCount:(NSUInteger)arg2 staticLexiconCursor:(struct _LXCursor )arg3 customLexiconCursor:(struct _LXCursor )arg4 patternCursor:(id)arg5 history:(id)arg6 activeHistoryRange:(_NSRange)arg7 mecabraIDs:(vector_12bd641b )arg8 segmentGroup:(id)arg9 precedingSpaceBehavior:(long long)arg10 effectiveContentType:(int)arg11 shouldAllowSpaceInsertion:(BOOL)arg12 inLatticePaths:(vector_7a3f6ffc )arg13 outLatticePaths:(vector_7a3f6ffc )arg14 totalStrokeCount:(long long)arg15 totalSubstrokeCount:(long long)arg16;
- (unsigned int)normalizeLMTokenIDForWord:(id)arg1 withTokenID:(unsigned int)arg2 isFromPattern:(BOOL)arg3 outScore:(double )arg4;
- (id)_tokensUsingLMTokenizerForString:(id)arg1 wordRanges:(id)arg2 nonWordPatterns:(id)arg3 outTokenIDs:(id )arg4;
- (double)_calculateJointWordLMScoreForString:(id)arg1 wordRanges:(id)arg2 wordIDs:(id)arg3 patternEntries:(id)arg4 history:(unsigned int )arg5 historyLength:(NSUInteger)arg6;
- (double)_calculateJointWordLMScoreForTokenPath:(id)arg1 tokenizedResult:(id)arg2 history:(unsigned int )arg3 historyLength:(NSUInteger)arg4 pathTranscription:(id )arg5;
- (id)_textReplacementResultForLegacyRecognitionResult:(id)arg1;
- (id)recognitionResultsForSingleCharacterDrawing:(id)arg1 segmentGroup:(id)arg2 options:(id)arg3 history:(id)arg4;
- (void)_removeOVSResults:(id)arg1 withHistory:(id)arg2;
- (id)recognitionResultsForSketchDrawing:(id)arg1 options:(id)arg2;
- (id)manhattanLineCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult )arg2 rejectionResult:(id )arg3;
- (id)lineCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult )arg2 rejectionResult:(id )arg3;
- (id)outlineArrowCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult )arg2;
- (id)rectangleCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult )arg2;
- (id)pentagonCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult )arg2;
- (id)ellipseCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult )arg2;
- (id)chatBubbleCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult )arg2;
- (id)triangleCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult )arg2;
- (id)starCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult )arg2;
- (void)endpointsForDrawing:(id)arg1 startLocation:(CGPoint )arg2 endLocation:(CGPoint )arg3;
- (id)characterSetForStrings:(id)arg1;
- (id)supportedStrings;
- (id)supportedCharacterSet;
- (id)sketchCodeForDescription:(id)arg1;
- (id)sketchDescriptionForCode:(int)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1 mode:(int)arg2 locale:(struct __CFLocale )arg3;
- (id)initWithType:(int)arg1 mode:(int)arg2;
- (id)strokeIndexesForLastCharacter;
- (id)mecabraRareWordIndexes:(id)arg1 wordRanges:(id)arg2;
- (BOOL)isRareChineseEntry:(id)arg1;
- (id)whitelistMecabraRareCharacters;
- (vector_de520796)completionsForCandidate:(id)arg1 candidateContext:(id)arg2 prefix:(id)arg3 option:(NSUInteger)arg4;
- (vector_de520796)completionsForCandidate:(id)arg1 prefix:(id)arg2 option:(NSUInteger)arg3;
- (void)candidateAccepted:(void )arg1;
- (void)candidatesCleared;
- (void)setCustomLexicon:(struct _LXLexicon )arg1 customVocabulary:(void )arg2;
- (void)updateMecabraWithRegionalOTAAssets:(id)arg1 nonRegionalOTAAssets:(id)arg2;
- (void)updateUserDictionaryLexicon:(id)arg1;
- (void)updateAddressBookLexicon:(id)arg1;
- (void)logCandidateIfAppropriate:(void )arg1;
- (void)_unloadEngineAndResources;
- (BOOL)_isLocaleSupported:(id)arg1;
- (void)_reloadEngineAndResources;
- (void)_loadMecabraIfNeeded;
- (id)_alternativeInterpretationsForString:(id)arg1;
- (id)_transliterationVariantsForString:(id)arg1;
- (id)transliterationVariantsForString:(id)arg1;
- (BOOL)_isInappropriateString:(id)arg1;
- (BOOL)_isInappropriateString:(id)arg1 withTrie:(struct _CFBurstTrie )arg2;
- (BOOL)_isInappropriateString:(id)arg1 withLexicon:(struct _LXLexicon )arg2;
- (BOOL)_isInappropriateLexiconEntry:(struct _LXEntry )arg1;
- (BOOL)isOVSString:(id)arg1;
- (id)obfuscateString:(id)arg1;
- (id)_defaultPunctuationResultWithStrokeCount:(NSUInteger)arg1;
- (id)_defaultLegacyPunctuationResultsWithStrokeCount:(NSUInteger)arg1;
- (id)_defaultPunctuationStringsOutputScores:(id )arg1 maxCandidateCount:(long long)arg2;
- (id)initWithType:(int)arg1 mode:(int)arg2 learningDictionaryURL:(id)arg3;
- (id)initWithMode:(int)arg1 locale:(id)arg2 learningDictionaryURL:(id)arg3;
- (id)initWithMode:(int)arg1 locale:(id)arg2;
- (id)initWithType:(int)arg1 mode:(int)arg2 locale:(struct __CFLocale )arg3 learningDictionaryURL:(id)arg4;
@property(readonly, nonatomic) CHRecognitionInsight *recordedInsightFromLastRequest;
- (void)recordInsightWithRequest:(id)arg1;

@end

