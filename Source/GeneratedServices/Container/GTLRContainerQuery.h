// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Container Engine API (container/v1)
// Description:
//   Builds and manages clusters that run container-based applications, powered
//   by open source Kubernetes technology.
// Documentation:
//   https://cloud.google.com/container-engine/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRContainer_CreateClusterRequest;
@class GTLRContainer_CreateNodePoolRequest;
@class GTLRContainer_UpdateClusterRequest;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Container query classes.
 */
@interface GTLRContainerQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(copy, nullable) NSString *fields;

@end

/**
 *  Creates a cluster, consisting of the specified number and type of Google
 *  Compute Engine instances. By default, the cluster is created in the
 *  project's [default network](/compute/docs/networks-and-firewalls#networks).
 *  One firewall is added for the cluster. After cluster creation, the cluster
 *  creates routes for each node to allow the containers on that node to
 *  communicate with all other instances in the cluster. Finally, an entry is
 *  added to the project's global metadata indicating which CIDR range is being
 *  used by the cluster.
 *
 *  Method: container.projects.zones.clusters.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerCloudPlatform
 */
@interface GTLRContainerQuery_ProjectsZonesClustersCreate : GTLRContainerQuery
// Previous library name was
//   +[GTLQueryContainer queryForProjectsZonesClustersCreateWithObject:projectId:zoneProperty:]

/**
 *  The Google Developers Console [project ID or project
 *  number](https://support.google.com/cloud/answer/6158840).
 */
@property(copy, nullable) NSString *projectId;

/**
 *  The name of the Google Compute Engine [zone](/compute/docs/zones#available)
 *  in which the cluster resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRContainer_Operation.
 *
 *  Creates a cluster, consisting of the specified number and type of Google
 *  Compute Engine instances. By default, the cluster is created in the
 *  project's [default network](/compute/docs/networks-and-firewalls#networks).
 *  One firewall is added for the cluster. After cluster creation, the cluster
 *  creates routes for each node to allow the containers on that node to
 *  communicate with all other instances in the cluster. Finally, an entry is
 *  added to the project's global metadata indicating which CIDR range is being
 *  used by the cluster.
 *
 *  @param object The @c GTLRContainer_CreateClusterRequest to include in the
 *    query.
 *  @param projectId The Google Developers Console [project ID or project
 *    number](https://support.google.com/cloud/answer/6158840).
 *  @param zoneProperty The name of the Google Compute Engine
 *    [zone](/compute/docs/zones#available) in which the cluster resides.
 *
 *  @returns GTLRContainerQuery_ProjectsZonesClustersCreate
 */
+ (instancetype)queryWithObject:(GTLRContainer_CreateClusterRequest *)object
                      projectId:(NSString *)projectId
                   zoneProperty:(NSString *)zoneProperty;

@end

/**
 *  Deletes the cluster, including the Kubernetes endpoint and all worker nodes.
 *  Firewalls and routes that were configured during cluster creation are also
 *  deleted. Other Google Compute Engine resources that might be in use by the
 *  cluster (e.g. load balancer resources) will not be deleted if they weren't
 *  present at the initial create time.
 *
 *  Method: container.projects.zones.clusters.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerCloudPlatform
 */
@interface GTLRContainerQuery_ProjectsZonesClustersDelete : GTLRContainerQuery
// Previous library name was
//   +[GTLQueryContainer queryForProjectsZonesClustersDeleteWithprojectId:zoneProperty:clusterId:]

/** The name of the cluster to delete. */
@property(copy, nullable) NSString *clusterId;

/**
 *  The Google Developers Console [project ID or project
 *  number](https://support.google.com/cloud/answer/6158840).
 */
@property(copy, nullable) NSString *projectId;

/**
 *  The name of the Google Compute Engine [zone](/compute/docs/zones#available)
 *  in which the cluster resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRContainer_Operation.
 *
 *  Deletes the cluster, including the Kubernetes endpoint and all worker nodes.
 *  Firewalls and routes that were configured during cluster creation are also
 *  deleted. Other Google Compute Engine resources that might be in use by the
 *  cluster (e.g. load balancer resources) will not be deleted if they weren't
 *  present at the initial create time.
 *
 *  @param projectId The Google Developers Console [project ID or project
 *    number](https://support.google.com/cloud/answer/6158840).
 *  @param zoneProperty The name of the Google Compute Engine
 *    [zone](/compute/docs/zones#available) in which the cluster resides.
 *  @param clusterId The name of the cluster to delete.
 *
 *  @returns GTLRContainerQuery_ProjectsZonesClustersDelete
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                      zoneProperty:(NSString *)zoneProperty
                         clusterId:(NSString *)clusterId;

@end

/**
 *  Gets the details of a specific cluster.
 *
 *  Method: container.projects.zones.clusters.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerCloudPlatform
 */
@interface GTLRContainerQuery_ProjectsZonesClustersGet : GTLRContainerQuery
// Previous library name was
//   +[GTLQueryContainer queryForProjectsZonesClustersGetWithprojectId:zoneProperty:clusterId:]

/** The name of the cluster to retrieve. */
@property(copy, nullable) NSString *clusterId;

/**
 *  The Google Developers Console [project ID or project
 *  number](https://support.google.com/cloud/answer/6158840).
 */
@property(copy, nullable) NSString *projectId;

/**
 *  The name of the Google Compute Engine [zone](/compute/docs/zones#available)
 *  in which the cluster resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRContainer_Cluster.
 *
 *  Gets the details of a specific cluster.
 *
 *  @param projectId The Google Developers Console [project ID or project
 *    number](https://support.google.com/cloud/answer/6158840).
 *  @param zoneProperty The name of the Google Compute Engine
 *    [zone](/compute/docs/zones#available) in which the cluster resides.
 *  @param clusterId The name of the cluster to retrieve.
 *
 *  @returns GTLRContainerQuery_ProjectsZonesClustersGet
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                      zoneProperty:(NSString *)zoneProperty
                         clusterId:(NSString *)clusterId;

@end

/**
 *  Lists all clusters owned by a project in either the specified zone or all
 *  zones.
 *
 *  Method: container.projects.zones.clusters.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerCloudPlatform
 */
@interface GTLRContainerQuery_ProjectsZonesClustersList : GTLRContainerQuery
// Previous library name was
//   +[GTLQueryContainer queryForProjectsZonesClustersListWithprojectId:zoneProperty:]

/**
 *  The Google Developers Console [project ID or project
 *  number](https://support.google.com/cloud/answer/6158840).
 */
@property(copy, nullable) NSString *projectId;

/**
 *  The name of the Google Compute Engine [zone](/compute/docs/zones#available)
 *  in which the cluster resides, or "-" for all zones.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRContainer_ListClustersResponse.
 *
 *  Lists all clusters owned by a project in either the specified zone or all
 *  zones.
 *
 *  @param projectId The Google Developers Console [project ID or project
 *    number](https://support.google.com/cloud/answer/6158840).
 *  @param zoneProperty The name of the Google Compute Engine
 *    [zone](/compute/docs/zones#available) in which the cluster resides, or "-"
 *    for all zones.
 *
 *  @returns GTLRContainerQuery_ProjectsZonesClustersList
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                      zoneProperty:(NSString *)zoneProperty;

@end

/**
 *  Creates a node pool for a cluster.
 *
 *  Method: container.projects.zones.clusters.nodePools.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerCloudPlatform
 */
@interface GTLRContainerQuery_ProjectsZonesClustersNodePoolsCreate : GTLRContainerQuery
// Previous library name was
//   +[GTLQueryContainer queryForProjectsZonesClustersNodePoolsCreateWithObject:projectId:zoneProperty:clusterId:]

/** The name of the cluster. */
@property(copy, nullable) NSString *clusterId;

/**
 *  The Google Developers Console [project ID or project
 *  number](https://developers.google.com/console/help/new/#projectnumber).
 */
@property(copy, nullable) NSString *projectId;

/**
 *  The name of the Google Compute Engine [zone](/compute/docs/zones#available)
 *  in which the cluster resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRContainer_Operation.
 *
 *  Creates a node pool for a cluster.
 *
 *  @param object The @c GTLRContainer_CreateNodePoolRequest to include in the
 *    query.
 *  @param projectId The Google Developers Console [project ID or project
 *    number](https://developers.google.com/console/help/new/#projectnumber).
 *  @param zoneProperty The name of the Google Compute Engine
 *    [zone](/compute/docs/zones#available) in which the cluster resides.
 *  @param clusterId The name of the cluster.
 *
 *  @returns GTLRContainerQuery_ProjectsZonesClustersNodePoolsCreate
 */
+ (instancetype)queryWithObject:(GTLRContainer_CreateNodePoolRequest *)object
                      projectId:(NSString *)projectId
                   zoneProperty:(NSString *)zoneProperty
                      clusterId:(NSString *)clusterId;

@end

/**
 *  Deletes a node pool from a cluster.
 *
 *  Method: container.projects.zones.clusters.nodePools.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerCloudPlatform
 */
@interface GTLRContainerQuery_ProjectsZonesClustersNodePoolsDelete : GTLRContainerQuery
// Previous library name was
//   +[GTLQueryContainer queryForProjectsZonesClustersNodePoolsDeleteWithprojectId:zoneProperty:clusterId:nodePoolId:]

/** The name of the cluster. */
@property(copy, nullable) NSString *clusterId;

/** The name of the node pool to delete. */
@property(copy, nullable) NSString *nodePoolId;

/**
 *  The Google Developers Console [project ID or project
 *  number](https://developers.google.com/console/help/new/#projectnumber).
 */
@property(copy, nullable) NSString *projectId;

/**
 *  The name of the Google Compute Engine [zone](/compute/docs/zones#available)
 *  in which the cluster resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRContainer_Operation.
 *
 *  Deletes a node pool from a cluster.
 *
 *  @param projectId The Google Developers Console [project ID or project
 *    number](https://developers.google.com/console/help/new/#projectnumber).
 *  @param zoneProperty The name of the Google Compute Engine
 *    [zone](/compute/docs/zones#available) in which the cluster resides.
 *  @param clusterId The name of the cluster.
 *  @param nodePoolId The name of the node pool to delete.
 *
 *  @returns GTLRContainerQuery_ProjectsZonesClustersNodePoolsDelete
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                      zoneProperty:(NSString *)zoneProperty
                         clusterId:(NSString *)clusterId
                        nodePoolId:(NSString *)nodePoolId;

@end

/**
 *  Retrieves the node pool requested.
 *
 *  Method: container.projects.zones.clusters.nodePools.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerCloudPlatform
 */
@interface GTLRContainerQuery_ProjectsZonesClustersNodePoolsGet : GTLRContainerQuery
// Previous library name was
//   +[GTLQueryContainer queryForProjectsZonesClustersNodePoolsGetWithprojectId:zoneProperty:clusterId:nodePoolId:]

/** The name of the cluster. */
@property(copy, nullable) NSString *clusterId;

/** The name of the node pool. */
@property(copy, nullable) NSString *nodePoolId;

/**
 *  The Google Developers Console [project ID or project
 *  number](https://developers.google.com/console/help/new/#projectnumber).
 */
@property(copy, nullable) NSString *projectId;

/**
 *  The name of the Google Compute Engine [zone](/compute/docs/zones#available)
 *  in which the cluster resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRContainer_NodePool.
 *
 *  Retrieves the node pool requested.
 *
 *  @param projectId The Google Developers Console [project ID or project
 *    number](https://developers.google.com/console/help/new/#projectnumber).
 *  @param zoneProperty The name of the Google Compute Engine
 *    [zone](/compute/docs/zones#available) in which the cluster resides.
 *  @param clusterId The name of the cluster.
 *  @param nodePoolId The name of the node pool.
 *
 *  @returns GTLRContainerQuery_ProjectsZonesClustersNodePoolsGet
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                      zoneProperty:(NSString *)zoneProperty
                         clusterId:(NSString *)clusterId
                        nodePoolId:(NSString *)nodePoolId;

@end

/**
 *  Lists the node pools for a cluster.
 *
 *  Method: container.projects.zones.clusters.nodePools.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerCloudPlatform
 */
@interface GTLRContainerQuery_ProjectsZonesClustersNodePoolsList : GTLRContainerQuery
// Previous library name was
//   +[GTLQueryContainer queryForProjectsZonesClustersNodePoolsListWithprojectId:zoneProperty:clusterId:]

/** The name of the cluster. */
@property(copy, nullable) NSString *clusterId;

/**
 *  The Google Developers Console [project ID or project
 *  number](https://developers.google.com/console/help/new/#projectnumber).
 */
@property(copy, nullable) NSString *projectId;

/**
 *  The name of the Google Compute Engine [zone](/compute/docs/zones#available)
 *  in which the cluster resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRContainer_ListNodePoolsResponse.
 *
 *  Lists the node pools for a cluster.
 *
 *  @param projectId The Google Developers Console [project ID or project
 *    number](https://developers.google.com/console/help/new/#projectnumber).
 *  @param zoneProperty The name of the Google Compute Engine
 *    [zone](/compute/docs/zones#available) in which the cluster resides.
 *  @param clusterId The name of the cluster.
 *
 *  @returns GTLRContainerQuery_ProjectsZonesClustersNodePoolsList
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                      zoneProperty:(NSString *)zoneProperty
                         clusterId:(NSString *)clusterId;

@end

/**
 *  Updates the settings of a specific cluster.
 *
 *  Method: container.projects.zones.clusters.update
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerCloudPlatform
 */
@interface GTLRContainerQuery_ProjectsZonesClustersUpdate : GTLRContainerQuery
// Previous library name was
//   +[GTLQueryContainer queryForProjectsZonesClustersUpdateWithObject:projectId:zoneProperty:clusterId:]

/** The name of the cluster to upgrade. */
@property(copy, nullable) NSString *clusterId;

/**
 *  The Google Developers Console [project ID or project
 *  number](https://support.google.com/cloud/answer/6158840).
 */
@property(copy, nullable) NSString *projectId;

/**
 *  The name of the Google Compute Engine [zone](/compute/docs/zones#available)
 *  in which the cluster resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRContainer_Operation.
 *
 *  Updates the settings of a specific cluster.
 *
 *  @param object The @c GTLRContainer_UpdateClusterRequest to include in the
 *    query.
 *  @param projectId The Google Developers Console [project ID or project
 *    number](https://support.google.com/cloud/answer/6158840).
 *  @param zoneProperty The name of the Google Compute Engine
 *    [zone](/compute/docs/zones#available) in which the cluster resides.
 *  @param clusterId The name of the cluster to upgrade.
 *
 *  @returns GTLRContainerQuery_ProjectsZonesClustersUpdate
 */
+ (instancetype)queryWithObject:(GTLRContainer_UpdateClusterRequest *)object
                      projectId:(NSString *)projectId
                   zoneProperty:(NSString *)zoneProperty
                      clusterId:(NSString *)clusterId;

@end

/**
 *  Returns configuration info about the Container Engine service.
 *
 *  Method: container.projects.zones.getServerconfig
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerCloudPlatform
 */
@interface GTLRContainerQuery_ProjectsZonesGetServerconfig : GTLRContainerQuery
// Previous library name was
//   +[GTLQueryContainer queryForProjectsZonesGetServerconfigWithprojectId:zoneProperty:]

/**
 *  The Google Developers Console [project ID or project
 *  number](https://support.google.com/cloud/answer/6158840).
 */
@property(copy, nullable) NSString *projectId;

/**
 *  The name of the Google Compute Engine [zone](/compute/docs/zones#available)
 *  to return operations for.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRContainer_ServerConfig.
 *
 *  Returns configuration info about the Container Engine service.
 *
 *  @param projectId The Google Developers Console [project ID or project
 *    number](https://support.google.com/cloud/answer/6158840).
 *  @param zoneProperty The name of the Google Compute Engine
 *    [zone](/compute/docs/zones#available) to return operations for.
 *
 *  @returns GTLRContainerQuery_ProjectsZonesGetServerconfig
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                      zoneProperty:(NSString *)zoneProperty;

@end

/**
 *  Gets the specified operation.
 *
 *  Method: container.projects.zones.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerCloudPlatform
 */
@interface GTLRContainerQuery_ProjectsZonesOperationsGet : GTLRContainerQuery
// Previous library name was
//   +[GTLQueryContainer queryForProjectsZonesOperationsGetWithprojectId:zoneProperty:operationId:]

/** The server-assigned `name` of the operation. */
@property(copy, nullable) NSString *operationId;

/**
 *  The Google Developers Console [project ID or project
 *  number](https://support.google.com/cloud/answer/6158840).
 */
@property(copy, nullable) NSString *projectId;

/**
 *  The name of the Google Compute Engine [zone](/compute/docs/zones#available)
 *  in which the cluster resides.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRContainer_Operation.
 *
 *  Gets the specified operation.
 *
 *  @param projectId The Google Developers Console [project ID or project
 *    number](https://support.google.com/cloud/answer/6158840).
 *  @param zoneProperty The name of the Google Compute Engine
 *    [zone](/compute/docs/zones#available) in which the cluster resides.
 *  @param operationId The server-assigned `name` of the operation.
 *
 *  @returns GTLRContainerQuery_ProjectsZonesOperationsGet
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                      zoneProperty:(NSString *)zoneProperty
                       operationId:(NSString *)operationId;

@end

/**
 *  Lists all operations in a project in a specific zone or all zones.
 *
 *  Method: container.projects.zones.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeContainerCloudPlatform
 */
@interface GTLRContainerQuery_ProjectsZonesOperationsList : GTLRContainerQuery
// Previous library name was
//   +[GTLQueryContainer queryForProjectsZonesOperationsListWithprojectId:zoneProperty:]

/**
 *  The Google Developers Console [project ID or project
 *  number](https://support.google.com/cloud/answer/6158840).
 */
@property(copy, nullable) NSString *projectId;

/**
 *  The name of the Google Compute Engine [zone](/compute/docs/zones#available)
 *  to return operations for, or `-` for all zones.
 *
 *  Remapped to 'zoneProperty' to avoid NSObject's 'zone'.
 */
@property(copy, nullable) NSString *zoneProperty;

/**
 *  Fetches a @c GTLRContainer_ListOperationsResponse.
 *
 *  Lists all operations in a project in a specific zone or all zones.
 *
 *  @param projectId The Google Developers Console [project ID or project
 *    number](https://support.google.com/cloud/answer/6158840).
 *  @param zoneProperty The name of the Google Compute Engine
 *    [zone](/compute/docs/zones#available) to return operations for, or `-` for
 *    all zones.
 *
 *  @returns GTLRContainerQuery_ProjectsZonesOperationsList
 */
+ (instancetype)queryWithProjectId:(NSString *)projectId
                      zoneProperty:(NSString *)zoneProperty;

@end

NS_ASSUME_NONNULL_END
