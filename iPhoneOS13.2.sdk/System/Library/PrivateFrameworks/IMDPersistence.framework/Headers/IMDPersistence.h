#import <IMDPersistence/CDStructures.h>
#import <IMDPersistence/IMAbstractDatabaseArchiver.h>
#import <IMDPersistence/IMAbstractDatabaseTrimmer.h>
#import <IMDPersistence/IMDAbstractDatabaseDowngrader.h>
#import <IMDPersistence/IMDCNAliasResolver.h>
#import <IMDPersistence/IMDCNPersonAliasResolver.h>
#import <IMDPersistence/IMDCoreSpotlightBaseIndexer.h>
#import <IMDPersistence/IMDCoreSpotlightChatParticipant.h>
#import <IMDPersistence/IMDCoreSpotlightContactCache.h>
#import <IMDPersistence/IMDCoreSpotlightDispatchObject.h>
#import <IMDPersistence/IMDCoreSpotlightIndexer-Protocol.h>
#import <IMDPersistence/IMDCoreSpotlightManager.h>
#import <IMDPersistence/IMDCoreSpotlightMessageAttachmentIndexer.h>
#import <IMDPersistence/IMDCoreSpotlightMessageBalloonPluginIndexer.h>
#import <IMDPersistence/IMDCoreSpotlightMessageBodyIndexer.h>
#import <IMDPersistence/IMDCoreSpotlightMessageDataDetectorsIndexer.h>
#import <IMDPersistence/IMDCoreSpotlightMessageMetadataIndexer.h>
#import <IMDPersistence/IMDCoreSpotlightMessageSubjectIndexer.h>
#import <IMDPersistence/IMDCoreSpotlightRecipientIndexer.h>
#import <IMDPersistence/IMDDatabaseDowngradeHelper.h>
#import <IMDPersistence/IMDMessageAutomaticHistoryDeletion.h>
#import <IMDPersistence/IMDNotificationsController.h>
#import <IMDPersistence/IMDPersistentAttachmentController.h>
#import <IMDPersistence/IMDSqlQuery.h>
#import <IMDPersistence/IMDSqlSelectQuery.h>
#import <IMDPersistence/IMDSuggestions.h>
#import <IMDPersistence/IMDTaskProgress.h>
#import <IMDPersistence/IMDWhitetailToCoralDowngradeHelper.h>
#import <IMDPersistence/IMDWhitetailToCoralDowngrader.h>
#import <IMDPersistence/IMDatabaseAnonymizer.h>
#import <IMDPersistence/IMTrimDatabaseToDays.h>
#import <IMDPersistence/IMTrimDatabaseToMessageCount.h>
#import <IMDPersistence/SGMessagesSuggestionsServiceDelegate-Protocol.h>