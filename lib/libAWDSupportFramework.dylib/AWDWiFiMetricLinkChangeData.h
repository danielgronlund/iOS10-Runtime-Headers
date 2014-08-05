/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSData;

@interface AWDWiFiMetricLinkChangeData : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _rssiHistorys;
    unsigned long long _timestamp;
    unsigned int _akmSuites;
    unsigned int _capabilities;
    unsigned int _channel;
    unsigned int _channelWidth;
    unsigned int _flags;
    unsigned int _htASel;
    unsigned int _htAmpduParams;
    unsigned int _htExtended;
    unsigned int _htInfo;
    NSData *_htSupportedMcsSet;
    unsigned int _htTxBf;
    unsigned int _mcastCipher;
    NSData *_oui;
    unsigned int _phyMode;
    unsigned int _reason;
    unsigned int _securityType;
    unsigned int _subreason;
    unsigned int _ucastCipher;
    unsigned int _vhtInfo;
    NSData *_vhtSupportedMcsSet;
    unsigned int _wpaProtocol;
    bool_isInVol;
    bool_isLinkUp;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int akmSuites : 1; 
        unsigned int capabilities : 1; 
        unsigned int channel : 1; 
        unsigned int channelWidth : 1; 
        unsigned int flags : 1; 
        unsigned int htASel : 1; 
        unsigned int htAmpduParams : 1; 
        unsigned int htExtended : 1; 
        unsigned int htInfo : 1; 
        unsigned int htTxBf : 1; 
        unsigned int mcastCipher : 1; 
        unsigned int phyMode : 1; 
        unsigned int reason : 1; 
        unsigned int securityType : 1; 
        unsigned int subreason : 1; 
        unsigned int ucastCipher : 1; 
        unsigned int vhtInfo : 1; 
        unsigned int wpaProtocol : 1; 
        unsigned int isInVol : 1; 
        unsigned int isLinkUp : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property(readonly) unsigned long long rssiHistorysCount;
@property(readonly) int* rssiHistorys;
@property bool hasIsLinkUp;
@property bool isLinkUp;
@property bool hasIsInVol;
@property bool isInVol;
@property bool hasReason;
@property unsigned int reason;
@property bool hasSubreason;
@property unsigned int subreason;
@property bool hasChannel;
@property unsigned int channel;
@property bool hasChannelWidth;
@property unsigned int channelWidth;
@property bool hasPhyMode;
@property unsigned int phyMode;
@property bool hasFlags;
@property unsigned int flags;
@property(readonly) bool hasOui;
@property(retain) NSData * oui;
@property bool hasSecurityType;
@property unsigned int securityType;
@property bool hasWpaProtocol;
@property unsigned int wpaProtocol;
@property bool hasMcastCipher;
@property unsigned int mcastCipher;
@property bool hasUcastCipher;
@property unsigned int ucastCipher;
@property bool hasAkmSuites;
@property unsigned int akmSuites;
@property bool hasCapabilities;
@property unsigned int capabilities;
@property bool hasHtInfo;
@property unsigned int htInfo;
@property bool hasHtExtended;
@property unsigned int htExtended;
@property bool hasHtTxBf;
@property unsigned int htTxBf;
@property bool hasHtASel;
@property unsigned int htASel;
@property bool hasHtAmpduParams;
@property unsigned int htAmpduParams;
@property(readonly) bool hasHtSupportedMcsSet;
@property(retain) NSData * htSupportedMcsSet;
@property bool hasVhtInfo;
@property unsigned int vhtInfo;
@property(readonly) bool hasVhtSupportedMcsSet;
@property(retain) NSData * vhtSupportedMcsSet;


- (id)vhtSupportedMcsSet;
- (unsigned int)vhtInfo;
- (id)htSupportedMcsSet;
- (unsigned int)htAmpduParams;
- (unsigned int)htASel;
- (unsigned int)htTxBf;
- (unsigned int)htExtended;
- (unsigned int)htInfo;
- (unsigned int)akmSuites;
- (unsigned int)ucastCipher;
- (unsigned int)mcastCipher;
- (unsigned int)wpaProtocol;
- (unsigned int)securityType;
- (id)oui;
- (unsigned int)phyMode;
- (unsigned int)channelWidth;
- (unsigned int)channel;
- (bool)isInVol;
- (bool)isLinkUp;
- (bool)hasVhtSupportedMcsSet;
- (bool)hasVhtInfo;
- (void)setHasVhtInfo:(bool)arg1;
- (void)setVhtInfo:(unsigned int)arg1;
- (bool)hasHtSupportedMcsSet;
- (bool)hasHtAmpduParams;
- (void)setHasHtAmpduParams:(bool)arg1;
- (void)setHtAmpduParams:(unsigned int)arg1;
- (bool)hasHtASel;
- (void)setHasHtASel:(bool)arg1;
- (void)setHtASel:(unsigned int)arg1;
- (bool)hasHtTxBf;
- (void)setHasHtTxBf:(bool)arg1;
- (void)setHtTxBf:(unsigned int)arg1;
- (bool)hasHtExtended;
- (void)setHasHtExtended:(bool)arg1;
- (void)setHtExtended:(unsigned int)arg1;
- (bool)hasHtInfo;
- (void)setHasHtInfo:(bool)arg1;
- (void)setHtInfo:(unsigned int)arg1;
- (bool)hasCapabilities;
- (void)setHasCapabilities:(bool)arg1;
- (bool)hasAkmSuites;
- (void)setHasAkmSuites:(bool)arg1;
- (void)setAkmSuites:(unsigned int)arg1;
- (bool)hasUcastCipher;
- (void)setHasUcastCipher:(bool)arg1;
- (void)setUcastCipher:(unsigned int)arg1;
- (bool)hasMcastCipher;
- (void)setHasMcastCipher:(bool)arg1;
- (void)setMcastCipher:(unsigned int)arg1;
- (bool)hasWpaProtocol;
- (void)setHasWpaProtocol:(bool)arg1;
- (void)setWpaProtocol:(unsigned int)arg1;
- (bool)hasSecurityType;
- (void)setHasSecurityType:(bool)arg1;
- (void)setSecurityType:(unsigned int)arg1;
- (bool)hasOui;
- (bool)hasPhyMode;
- (void)setHasPhyMode:(bool)arg1;
- (void)setPhyMode:(unsigned int)arg1;
- (bool)hasChannelWidth;
- (void)setHasChannelWidth:(bool)arg1;
- (void)setChannelWidth:(unsigned int)arg1;
- (bool)hasChannel;
- (void)setHasChannel:(bool)arg1;
- (void)setChannel:(unsigned int)arg1;
- (bool)hasIsInVol;
- (void)setHasIsInVol:(bool)arg1;
- (void)setIsInVol:(bool)arg1;
- (bool)hasIsLinkUp;
- (void)setHasIsLinkUp:(bool)arg1;
- (void)setIsLinkUp:(bool)arg1;
- (void)setRssiHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (int*)rssiHistorys;
- (void)addRssiHistory:(int)arg1;
- (int)rssiHistoryAtIndex:(unsigned long long)arg1;
- (void)clearRssiHistorys;
- (unsigned long long)rssiHistorysCount;
- (void)setVhtSupportedMcsSet:(id)arg1;
- (void)setHtSupportedMcsSet:(id)arg1;
- (void)setOui:(id)arg1;
- (unsigned int)subreason;
- (bool)hasSubreason;
- (void)setHasSubreason:(bool)arg1;
- (void)setSubreason:(unsigned int)arg1;
- (bool)hasFlags;
- (void)setHasFlags:(bool)arg1;
- (bool)hasReason;
- (void)setHasReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (bool)hasTimestamp;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)capabilities;
- (void)setCapabilities:(unsigned int)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setReason:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setFlags:(unsigned int)arg1;
- (unsigned int)reason;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned int)flags;

@end