/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CKAggregateConversation, NSMutableArray, NSMutableDictionary;

@interface CKConversationList : NSObject
{
    NSMutableArray *_conversations;
    CKAggregateConversation *_pendingConversation;
    BOOL _fullyLoaded;
    BOOL _loadingConversations;
    BOOL _needsIncomingConversations;
    NSMutableDictionary *_recipientHashToConversations;
}

+ (id)sharedConversationList;
- (id)init;
- (void)dealloc;
- (id)_recipientForMessage:(id)arg1;
- (id)_newConversationForMessage:(id)arg1 groupID:(id)arg2 recipientAddresses:(id)arg3 service:(id)arg4 aggregateConversation:(id *)arg5 updatesDisabled:(BOOL)arg6;
- (id)_newConversationForMessage:(id)arg1 groupID:(id)arg2 service:(id)arg3 aggregateConversation:(id *)arg4 updatesDisabled:(BOOL)arg5;
- (id)_conversationForMessage:(id)arg1 groupID:(id)arg2 create:(BOOL)arg3 service:(id)arg4 aggregateConversation:(id *)arg5;
- (id)_conversationForRecipients:(id)arg1 create:(BOOL)arg2 service:(id)arg3 aggregateConversation:(id *)arg4;
- (id)aggregateConversationForRecipients:(id)arg1 create:(BOOL)arg2 service:(id)arg3;
- (id)conversationForRecipients:(id)arg1 create:(BOOL)arg2 service:(id)arg3;
- (id)conversationForGroupID:(id)arg1 service:(id)arg2;
- (id)conversationForGroupID:(id)arg1 create:(BOOL)arg2 service:(id)arg3;
- (id)existingConversationForGroupID:(id)arg1;
- (id)existingAggregateConversationForGroupID:(id)arg1;
- (id)conversationForMessage:(id)arg1 create:(BOOL)arg2 service:(id)arg3;
- (id)recipientsByService:(id)arg1;
- (id)aggregateConversationsForRecipients:(id)arg1 create:(BOOL)arg2;
- (id)aggregateConversationForRecipients:(id)arg1 create:(BOOL)arg2;
- (id)existingConversationForAddresses:(id)arg1;
- (id)existingAggregateConversationForAddresses:(id)arg1;
- (void)resetCaches;
- (id)activeConversations;
- (BOOL)containsConversation:(id)arg1;
- (BOOL)hasActiveConversations;
- (id)loadedConversations;
- (void)reloadStaleConversations;
- (void)reloadConversations;
- (id)conversations;
- (void)resort;
- (void)_postConversationListChangedNotification;
- (void)addConversation:(id)arg1;
- (void)_addRecipientHash:(id)arg1;
- (void)unpendConversation;
- (void)applyPendingConversation;
- (id)pendingConversation;
- (int)unreadCount;
- (int)unreadConversationCount;
- (void)deleteConversationAtIndex:(int)arg1;
- (void)removeConversation:(id)arg1;
- (void)_abChanged:(id)arg1;
- (id)pendingConversationCreatingIfNecessary;
@property(readonly, nonatomic) BOOL needsIncomingConversations; // @synthesize needsIncomingConversations=_needsIncomingConversations;
@property(readonly, nonatomic) BOOL loadingConversations; // @synthesize loadingConversations=_loadingConversations;

@end

