/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit
 */

@interface FKFriendsManager : NSObject <FKFriendGroupDelegate, IDSBatchIDQueryControllerDelegate> {
    FKPerson *_activeEphemeralPerson;
    NSMutableArray *_blockList;
    unsigned int _blockListPostCount;
    NSMutableDictionary *_cachedStatuses;
    NSMutableDictionary *_changeLog;
    NSString *_domain;
    NSHashTable *_ephemeralPersons;
    NSMutableArray *_friendGroups;
    NSMutableArray *_friendList;
    NSMutableSet *_highPriorityDestinations;
    NSMapTable *_identifiersToPersonMap;
    NSTimer *_idsQueryTimeoutTimer;
    unsigned int _maxFriendGroups;
    unsigned int _maxFriendsPerGroup;
    BOOL _needsAddressBookRefresh;
    BOOL _needsFriendListSync;
    NPSManager *_npsManager;
    NSArray *_pendingDestinations;
    unsigned int _postCount;
    IDSBatchIDQueryController *_queryController;
    BOOL _refreshAgainstAddressBookDisabled;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSTimer *_saveTimer;
    NSString *_serviceName;
    BOOL _shouldAddEmptyTrailingGroup;
}

@property (nonatomic, retain) FKPerson *activeEphemeralPerson;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isRefreshAgainstAddressBookDisabled, nonatomic) BOOL refreshAgainstAddressBookDisabled;
@property (nonatomic, retain) NSString *serviceName;
@property (readonly) Class superclass;

+ (BOOL)_isRetailDemo;
+ (BOOL)_skipHasGizmoCheck;
+ (id)collapseChangeLogsIntoChangeLog:(id)arg1;
+ (id)managerForDomain:(id)arg1;
+ (void)setEnableEmptyTrailingGroup:(BOOL)arg1 domain:(id)arg2;
+ (void)setGroupSize:(unsigned int)arg1 domain:(id)arg2;
+ (void)setMaxGroupCount:(unsigned int)arg1 domain:(id)arg2;

- (void).cxx_destruct;
- (void)_addCuratedFriends:(id)arg1;
- (void)_addEmptyGroup;
- (void)_addEntryToChangeLogForPerson:(id)arg1 changeType:(id)arg2;
- (void)_addPersonToIdentifiersToPersonMap:(id)arg1;
- (void)_addressBookChanged:(id)arg1;
- (BOOL)_addressBookSequenceNumberDidChange;
- (void)_aggdLogFriendGroupCount;
- (void)_blockListChangedExternally;
- (BOOL)_canAddFriendGroup;
- (BOOL)_changeLogContainsFriendAdditionsOrUpdates;
- (int)_compareStatus:(int)arg1 toStatus:(int)arg2;
- (void)_createAddressToPersonDictionary;
- (void)_createEmptyFriendList;
- (id)_curatedFriendList;
- (void)_deduplicateFriendList;
- (id)_destinations;
- (int)_firstEmptyPosition;
- (id)_friendAtPosition:(unsigned int)arg1;
- (void)_friendsChangedExternally;
- (void)_groupTitleChangedExternally;
- (void)_idsQueryTimeoutTimerFired;
- (unsigned int)_indexForPosition:(unsigned int)arg1 inGroup:(id)arg2;
- (void)_initiateIDSDestinationStatusQuery:(id)arg1;
- (int)_lastKnownAddressBookSequenceNumber;
- (void)_loadBlockList;
- (void)_loadFriendList;
- (void)_loadGroupTitles;
- (unsigned int)_numberOfFriendsInList:(id)arg1;
- (void)_personValuesChanged:(id)arg1;
- (void)_postBlockListChangeNotification;
- (void)_postChangeNotification;
- (void)_postGroupListChangedNotification;
- (void)_queryDestinations:(id)arg1;
- (void)_removeGroupAtIndex:(unsigned int)arg1;
- (void)_removePersonFromIdentifiersToPersonMap:(id)arg1;
- (void)_save:(id)arg1;
- (void)_saveBlockList;
- (void)_setupQueryController;
- (BOOL)_shouldAddEmptyGroup;
- (void)_startIDSQueryTimeoutTimer;
- (void)_stopIDSQueryTimeoutTimer;
- (void)_storeEphemeralPerson:(id)arg1;
- (void)_unreadCountChanged:(id)arg1;
- (void)_updateFriendGroups;
- (void)_updateFriends:(id)arg1;
- (void)_updateLastKnownAddressBookSequenceNumber:(int)arg1;
- (BOOL)_writeBlockListToUserDefaults:(id)arg1;
- (void)_writeToUserDefaults:(id)arg1 synchronize:(BOOL)arg2;
- (id)activeEphemeralPerson;
- (BOOL)addFriend:(id)arg1;
- (id)allPeople;
- (void)blockAddresses:(id)arg1;
- (id)blockList;
- (BOOL)canAddFriend;
- (BOOL)containsFriendWithABRecordGUID:(id)arg1;
- (void)dealloc;
- (void)enableSupplementalLoggingWithFacility:(id)arg1 logName:(id)arg2 logDirectory:(id)arg3 defaultsDomain:(id)arg4 logLevelKey:(id)arg5 consoleLogLevelKey:(id)arg6;
- (void)friendGroup:(id)arg1 didMoveFriends:(id)arg2;
- (void)friendGroup:(id)arg1 didRemoveFriend:(id)arg2 atPosition:(unsigned int)arg3;
- (void)friendGroup:(id)arg1 didSetFriend:(id)arg2 atPosition:(unsigned int)arg3;
- (id)friendGroups;
- (unsigned int)groupIndexContainingFriend:(id)arg1;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (id)initWithDomain:(id)arg1;
- (BOOL)isAddressBlocked:(id)arg1;
- (BOOL)isPersonFriend:(id)arg1;
- (BOOL)isRefreshAgainstAddressBookDisabled;
- (void)markFriendListAsNormalized;
- (id)personLikePerson:(id)arg1;
- (id)personWithABRecordGUID:(id)arg1;
- (id)personWithDestinations:(id)arg1;
- (unsigned int)positionOfFriendInGroup:(id)arg1;
- (void)purgeEmptyFriendGroups;
- (void)refreshAgainstAddressBook;
- (void)refreshDestinationStatuses;
- (void)save;
- (void)saveFriendGroupTitles;
- (id)serviceName;
- (void)setActiveEphemeralPerson:(id)arg1;
- (void)setRefreshAgainstAddressBookDisabled:(BOOL)arg1;
- (void)setServiceName:(id)arg1;
- (int)statusForPerson:(id)arg1 requery:(BOOL)arg2;
- (void)syncFriendGroup:(id)arg1;
- (void)unblockAddresses:(id)arg1;

@end
