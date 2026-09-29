/* 					

																		=============================================
																		|											|
																		|				Database Core				|
																		|			   Destiny Roleplay				|
																		|				Kernel & SárG				|
																		|											|
																		=============================================																	*/
// Conexion MySQL //

#define				SQL_HOST 			"127.0.0.1"
#define 			SQL_USER 			"dbadmin"
#define 			SQL_PASS 			"!3Q++4A&&U2?uYu7!eKa*r$b-aG_d_"
#define 			SQL_DB 				"destiny_database"

//- Salt de password -//
new shaSalt[32] = "!$=??$$*D**33!&&&";
static input_text[129];

new static MySQL:MySQLCon;

forward _CrearTablas();
public _CrearTablas()
{
	new query[40000], temp_query[400], Cache:R, rows=0;

	// ********************************************* Stats del servidor ********************************************* //

	format(temp_query,sizeof(temp_query), "CREATE TABLE IF NOT EXISTS `users` (`uID` int(64) NOT NULL AUTO_INCREMENT, `nick` VARCHAR(32) NOT NULL, `password` VARCHAR(129) NOT NULL, `registrado` int(1) NOT NULL, `sexo` int(1) NOT NULL, `edad` int(2) NOT NULL, `ciudad` int(1) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`idioma` int(1) NOT NULL, `estiloWalk` int(1) NOT NULL, `estiloFight` int(1) NOT NULL, `sed` int(4) NOT NULL, `hambre` int(4) NOT NULL, `alcohol` int(4) NOT NULL, `fuerza` int(4) NOT NULL, `dinero` int(16) NOT NULL, `nivel` int(8) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`exp` int(8) NOT NULL, `horasJug` int(16) NOT NULL, `posX` float(16) NOT NULL, `posY` float(16) NOT NULL, `posZ` float(16) NOT NULL, `posR` float(16) NOT NULL, `vida` float(16) NOT NULL, `chaleco` float(16) NOT NULL, `intWorld` int(6) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`virtWorld` int(6) NOT NULL, `multiC` int(2) NOT NULL, `ip` VARCHAR(16) NOT NULL, `admin` int(4) NOT NULL, `encFacc` int(1) NOT NULL, `encFam` int(1) NOT NULL, `encStaff` int(1) NOT NULL, `encRol` int(1) NOT NULL, `encBan` int(1) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`casa_1` int(4) NOT NULL, `casa_2` int(4) NOT NULL, `casa_3` int(4) NOT NULL, `casaRenta` int(4) NOT NULL, `casaLlaves` int(4) NOT NULL, `neg_1` int(4) NOT NULL, `neg_2` int(4) NOT NULL, `neg_3` int(4) NOT NULL, `puntosRol` int(6) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`llavesVeh_1` int(4) NOT NULL, `llavesVeh_2` int(4) NOT NULL, `llavesVeh_3` int(4) NOT NULL, `llavesVeh_4` int(4) NOT NULL, `llavesVeh_5` int(4) NOT NULL, `llavesVeh_6` int(4) NOT NULL, `llavesVeh_7` int(4) NOT NULL, `llavesVeh_8` int(4) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`llavesVeh_9` int(4) NOT NULL, `llavesVeh_10` int(4) NOT NULL, `llavesVPrest_1` int(4) NOT NULL, `llavesVPrest_2` int(4) NOT NULL, `llavesVPrest_3` int(4) NOT NULL, `llavesVPrest_4` int(4) NOT NULL, `llavesVPrest_5` int(4) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`llavesVPrest_6` int(4) NOT NULL, `llavesVPrest_7` int(4) NOT NULL, `llavesVPrest_8` int(4) NOT NULL, `llavesVPrest_9` int(4) NOT NULL, `llavesVPrest_10` int(4) NOT NULL, `premium` int(2) NOT NULL, `colorP` int(4) NOT NULL, `dCoins` int(32) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`d_premium` int(4) NOT NULL, `m_premium` int(4) NOT NULL, `bol_1` int(6) NOT NULL, `bol_2` int(6) NOT NULL, `bol_3` int(6) NOT NULL, `bol_4` int(6) NOT NULL, `bol_5` int(6) NOT NULL, `bol_6` int(6) NOT NULL, `bol_7` int(6) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`bol_8` int(6) NOT NULL, `bol_9` int(6) NOT NULL, `bol_10` int(6) NOT NULL, `bol_1_cant` int(32) NOT NULL, `bol_2_cant` int(32) NOT NULL, `bol_3_cant` int(32) NOT NULL, `bol_4_cant` int(32) NOT NULL, `bol_5_cant` int(32) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`bol_6_cant` int(32) NOT NULL, `bol_7_cant` int(32) NOT NULL, `bol_8_cant` int(32) NOT NULL, `bol_9_cant` int(32) NOT NULL, `bol_10_cant` int(32) NOT NULL, `mano_izq` int(6) NOT NULL, `mano_der` int(6) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`mano_izq_cant` int(32) NOT NULL, `mano_der_cant` int(32) NOT NULL, `espalda` int(6) NOT NULL, `espalda_cant` int(32) NOT NULL, `cint_1` int(6) NOT NULL, `cint_2` int(6) NOT NULL, `cint_3` int(6) NOT NULL, `cint_4` int(6) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`cint_5` int(6) NOT NULL, `cint_6` int(6) NOT NULL, `cint_1_cant` int(32) NOT NULL, `cint_2_cant` int(32) NOT NULL, `cint_3_cant` int(32) NOT NULL, `cint_4_cant` int(32) NOT NULL, `cint_5_cant` int(32) NOT NULL, `cint_6_cant` int(32) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`ropa` int(3) NOT NULL, `ropa_armario_1` VARCHAR(64) NOT NULL, `ropa_armario_2` VARCHAR(64) NOT NULL, `ropa_armario_3` VARCHAR(64) NOT NULL, `ropa_armario_4` VARCHAR(64) NOT NULL, `ropa_armario_5` VARCHAR(64) NOT NULL, `ropa_armario_6` VARCHAR(64) NOT NULL, `ropa_armario_7` VARCHAR(64) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`ropa_armario_8` VARCHAR(64) NOT NULL, `liderFac` int(3) NOT NULL, `miembroFac` int(3) NOT NULL, `rangoFac` int(2) NOT NULL, `division` int(2) NOT NULL, `liderFam` int(3) NOT NULL, `miembroFam` int(3) NOT NULL, `rangoFam` int(2) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`muerto` int(2) NOT NULL, `muerto_2` int(2) NOT NULL, `telefono` int(10) NOT NULL, `frecuencia` int(6) NOT NULL, `boombox` int(1) NOT NULL, `loteria` int(4) NOT NULL, `mascara` int(1) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`estrellas` int(2) NOT NULL, `arrestos` int(10) NOT NULL, `sanciones` int(10) NOT NULL, `encarcelado` int(1) NOT NULL, `tiempoCarcel` int(64) NOT NULL, `cargas` int(8) NOT NULL, `muebles` int(16) NOT NULL, `troncos` int(16) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`pescados` int(16) NOT NULL, `cosechas` int(16) NOT NULL, `escombros` int(8) NOT NULL, `materiales` int(8) NOT NULL, `pinturas` int(8) NOT NULL, `lineas` int(8) NOT NULL, `carnadas` int(8) NOT NULL, `cheques` int(8) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`job_1` int(2) NOT NULL, `job_2` int(2) NOT NULL, `job_3` int(2) NOT NULL, `licVeh` int(1) NOT NULL, `licVuelo` int(1) NOT NULL, `licBarco` int(1) NOT NULL, `licArmas` int(1) NOT NULL, `licCamion` int(1) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`habil_1` int(4) NOT NULL, `habil_2` int(4) NOT NULL, `habil_3` int(4) NOT NULL, `habil_4` int(4) NOT NULL, `habil_5` int(4) NOT NULL, `habil_6` int(4) NOT NULL, `habil_7` int(4) NOT NULL, `habil_8` int(4) NOT NULL, `habil_2_1` int(4) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`habil_2_2` int(4) NOT NULL, `habil_2_3` int(4) NOT NULL, `habil_2_4` int(4) NOT NULL, `habil_2_5` int(4) NOT NULL, `habil_2_6` int(4) NOT NULL, `habil_2_7` int(4) NOT NULL, `habil_2_8` int(4) NOT NULL, `estado_uso` int(4) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`estado_color` int(4) NOT NULL, `estado_texto` VARCHAR(64) NOT NULL, `dni` int(10) NOT NULL, `edad_falsa` int(2) NOT NULL, `dni_falso` int(10) NOT NULL, `dni_name` VARCHAR(32) NOT NULL, `cuentasBanco` int(1) NOT NULL, `delito_1` VARCHAR(64) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`delito_2` VARCHAR(64) NOT NULL, `delito_3` VARCHAR(64) NOT NULL, `delito_4` VARCHAR(64) NOT NULL, `delito_5` VARCHAR(64) NOT NULL, `delito_6` VARCHAR(64) NOT NULL, `delito_7` VARCHAR(64) NOT NULL, `delito_8` VARCHAR(64) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`delito_9` VARCHAR(64) NOT NULL, `delito_10` VARCHAR(64) NOT NULL, `oDelito_1` int(4) NOT NULL, `oDelito_2` int(4) NOT NULL, `oDelito_3` int(4) NOT NULL, `oDelito_4` int(4) NOT NULL, `oDelito_5` int(4) NOT NULL, `oDelito_6` int(4) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`oDelito_7` int(4) NOT NULL, `oDelito_8` int(4) NOT NULL, `oDelito_9` int(4) NOT NULL, `oDelito_10` int(4) NOT NULL, `contacto_1` int(10) NOT NULL, `contacto_2` int(10) NOT NULL, `contacto_3` int(10) NOT NULL, `contacto_4` int(10) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`contacto_5` int(10) NOT NULL, `contacto_6` int(10) NOT NULL, `contacto_7` int(10) NOT NULL, `contacto_8` int(10) NOT NULL, `contacto_9` int(10) NOT NULL, `contacto_10` int(10) NOT NULL, `contacto_11` int(10) NOT NULL, `contacto_12` int(10) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`contacto_13` int(10) NOT NULL, `contacto_14` int(10) NOT NULL, `contacto_15` int(10) NOT NULL, `contacto_16` int(10) NOT NULL, `contacto_17` int(10) NOT NULL, `contacto_18` int(10) NOT NULL, `contacto_19` int(10) NOT NULL, `contacto_20` int(10) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`contacto_1_n` VARCHAR(32) NOT NULL, `contacto_2_n` VARCHAR(32) NOT NULL, `contacto_3_n` VARCHAR(32) NOT NULL, `contacto_4_n` VARCHAR(32) NOT NULL, `contacto_5_n` VARCHAR(32) NOT NULL, `contacto_6_n` VARCHAR(32) NOT NULL, `contacto_7_n` VARCHAR(32) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`contacto_8_n` VARCHAR(32) NOT NULL, `contacto_9_n` VARCHAR(32) NOT NULL, `contacto_10_n` VARCHAR(32) NOT NULL, `contacto_11_n` VARCHAR(32) NOT NULL, `contacto_12_n` VARCHAR(32) NOT NULL, `contacto_13_n` VARCHAR(32) NOT NULL, `contacto_14_n` VARCHAR(32) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`contacto_15_n` VARCHAR(32) NOT NULL, `contacto_16_n` VARCHAR(32) NOT NULL, `contacto_17_n` VARCHAR(32) NOT NULL, `contacto_18_n` VARCHAR(32) NOT NULL, `contacto_19_n` VARCHAR(32) NOT NULL, `contacto_20_n` VARCHAR(32) NOT NULL, `tiempo_1` int(6) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`tiempo_2` int(6) NOT NULL, `tiempo_3` int(6) NOT NULL, `tiempo_4` int(6) NOT NULL, `tiempo_5` int(6) NOT NULL, `tiempo_6` int(6) NOT NULL, `tiempo_7` int(6) NOT NULL, `tiempo_8` int(6) NOT NULL, `tiempo_9` int(6) NOT NULL, `tiempo_10` int(6) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`tiempo_11` int(6) NOT NULL, `tiempo_12` int(6) NOT NULL, `tiempo_13` int(6) NOT NULL, `tiempo_14` int(6) NOT NULL, `tiempo_15` int(6) NOT NULL, `tiempo_16` int(6) NOT NULL, `tiempo_17` int(6) NOT NULL, `tiempo_18` int(6) NOT NULL, `tiempo_19` int(6) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`tiempo_20` int(6) NOT NULL, `horas` int(6) NOT NULL, `minutos` int(6) NOT NULL, `segundos` int(6) NOT NULL, `dias` int(6) NOT NULL, `meses` int(6) NOT NULL, `anos` int(6) NOT NULL, `audio_1` VARCHAR(128) NOT NULL, `audio_2` VARCHAR(128) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`audio_3` VARCHAR(128) NOT NULL, `negocio_1` int(4) NOT NULL, `negocio_2` int(4) NOT NULL, `negocio_3` int(4) NOT NULL, `payday` int(4) NOT NULL, `t_fabrica` int(4) NOT NULL, `i_fabrica` int(4) NOT NULL, `t_fabrica2` int(4) NOT NULL, `i_fabrica2` int(4) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`piedras` int(8) NOT NULL, `tickets` int(8) NOT NULL, `adiccion_1` int(4) NOT NULL, `adiccion_2` int(4) NOT NULL, `adiccion_3` int(4) NOT NULL, `adiccion_4` int(4) NOT NULL, `adiccion_5` int(4) NOT NULL, `empeno_0` int(4) NOT NULL, `empeno_1` int(4) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`empeno_2` int(4) NOT NULL, `empeno_3` int(4) NOT NULL, `empeno_4` int(4) NOT NULL, `empeno2_0` int(4) NOT NULL, `empeno2_1` int(4) NOT NULL, `empeno2_2` int(4) NOT NULL, `empeno2_3` int(4) NOT NULL, `empeno2_4` int(4) NOT NULL, `empresa_1` int(4) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`empresa_2` int(4) NOT NULL, `empresa_3` int(4) NOT NULL, `empresaK_1` int(4) NOT NULL, `empresaK_2` int(4) NOT NULL, `empresaK_3` int(4) NOT NULL, `contrato` int(4) NOT NULL, `horas_E` int(4) NOT NULL, `cambioN` int(2) NOT NULL, `online` int(1) NOT NULL, `idActual` int(2) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`t_1_modelo` int(5) NOT NULL, `t_1_parte` int(4) NOT NULL, `t_1_pX` float(16) NOT NULL, `t_1_pY` float(16) NOT NULL, `t_1_pZ` float(16) NOT NULL, `t_1_rX` float(16) NOT NULL, `t_1_rY` float(16) NOT NULL, `t_1_rZ` float(16) NOT NULL, `t_1_eX` float(16) NOT NULL, `t_1_eY` float(16) NOT NULL, `t_1_eZ` float(16) NOT NULL, `t_1_col` int(1) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`t_2_modelo` int(5) NOT NULL, `t_2_parte` int(4) NOT NULL, `t_2_pX` float(16) NOT NULL, `t_2_pY` float(16) NOT NULL, `t_2_pZ` float(16) NOT NULL, `t_2_rX` float(16) NOT NULL, `t_2_rY` float(16) NOT NULL, `t_2_rZ` float(16) NOT NULL, `t_2_eX` float(16) NOT NULL, `t_2_eY` float(16) NOT NULL, `t_2_eZ` float(16) NOT NULL, `t_2_col` int(1) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`t_3_modelo` int(5) NOT NULL, `t_3_parte` int(4) NOT NULL, `t_3_pX` float(16) NOT NULL, `t_3_pY` float(16) NOT NULL, `t_3_pZ` float(16) NOT NULL, `t_3_rX` float(16) NOT NULL, `t_3_rY` float(16) NOT NULL, `t_3_rZ` float(16) NOT NULL, `t_3_eX` float(16) NOT NULL, `t_3_eY` float(16) NOT NULL, `t_3_eZ` float(16) NOT NULL, `t_3_col` int(1) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`t_4_modelo` int(5) NOT NULL, `t_4_parte` int(4) NOT NULL, `t_4_pX` float(16) NOT NULL, `t_4_pY` float(16) NOT NULL, `t_4_pZ` float(16) NOT NULL, `t_4_rX` float(16) NOT NULL, `t_4_rY` float(16) NOT NULL, `t_4_rZ` float(16) NOT NULL, `t_4_eX` float(16) NOT NULL, `t_4_eY` float(16) NOT NULL, `t_4_eZ` float(16) NOT NULL, `t_4_col` int(1) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`t_5_modelo` int(5) NOT NULL, `t_5_parte` int(4) NOT NULL, `t_5_pX` float(16) NOT NULL, `t_5_pY` float(16) NOT NULL, `t_5_pZ` float(16) NOT NULL, `t_5_rX` float(16) NOT NULL, `t_5_rY` float(16) NOT NULL, `t_5_rZ` float(16) NOT NULL, `t_5_eX` float(16) NOT NULL, `t_5_eY` float(16) NOT NULL, `t_5_eZ` float(16) NOT NULL, `t_5_col` int(1) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`conceKey_1` int(5) NOT NULL, `conceKey_2` int(5) NOT NULL, `conceKey_3` int(5) NOT NULL, PRIMARY KEY (`uID`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	strcat(query, temp_query);

	mysql_query(MySQLCon, query, false); 
	query[0] = '\0';

	///////// Vehiculos de faccion
	format(temp_query,sizeof(temp_query), "CREATE TABLE IF NOT EXISTS `vehiculos_facc` (`index` int(32) NOT NULL AUTO_INCREMENT, `vehID` int(8) NOT NULL, `upd` int(1) NOT NULL, `m_1` int(5) NOT NULL, `m_2` int(5) NOT NULL, `m_3` int(5) NOT NULL, `m_4` int(5) NOT NULL, `m_5` int(5) NOT NULL, `m_6` int(5) NOT NULL, `m_7` int(5) NOT NULL, `m_8` int(5) NOT NULL, `m_9` int(5) NOT NULL, `m_10` int(5) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`m_11` int(5) NOT NULL, `m_12` int(5) NOT NULL, `m_1_c` int(5) NOT NULL, `m_2_c` int(5) NOT NULL, `m_3_c` int(5) NOT NULL, `m_4_c` int(5) NOT NULL, `m_5_c` int(5) NOT NULL, `m_6_c` int(5) NOT NULL, `m_7_c` int(5) NOT NULL, `m_8_c` int(5) NOT NULL, `m_9_c` int(5) NOT NULL, `m_10_c` int(5) NOT NULL, `m_11_c` int(5) NOT NULL, `m_12_c` int(5) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "PRIMARY KEY (`index`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	strcat(query, temp_query);

	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	mysql_format(MySQLCon, query, sizeof(query), "SELECT * FROM vehiculos_facc;");
	R = mysql_query(MySQLCon, query, true);
	cache_get_row_count(rows);

	if(rows == 0)
	{
		printf("[MySQL] Creando maleteros de vehiculos de faccion. Esto puede tardar unos segundos...");
		for(new i=0; i< sizeof(InfoFacVeh); i++)
		{
			format(query, sizeof(query), "INSERT INTO vehiculos_facc (vehID) VALUES('%d');", i);
			mysql_query(MySQLCon, query, false);
		}
		printf("[MySQL] Se crearon los maleteros de vehiculos de faccion en la base de datos.");
	}

	cache_delete(R);
	query[0] = '\0';

	////// Plantas de marihuana
	format(query,sizeof(query), "CREATE TABLE IF NOT EXISTS `plantas_marihuana` (`index` int(32) NOT NULL AUTO_INCREMENT, `id` int(32) NOT NULL, `owner` VARCHAR(32) NOT NULL, `creado` tinyint(1) NOT NULL DEFAULT '0', `time` int(5) NOT NULL, `posX` float(16) NOT NULL, `posY` float(16) NOT NULL, `posZ` float(16) NOT NULL, `interior` int(10) NOT NULL, `virtualworld` int(10) NOT NULL, `grams` int(16) NOT NULL, PRIMARY KEY (`index`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	rows=0;

	mysql_format(MySQLCon, query, sizeof(query), "SELECT * FROM plantas_marihuana;");
	R = mysql_query(MySQLCon, query, true);
	cache_get_row_count(rows);

	if(rows == 0)
	{
		printf("[MySQL] Creando plantas de marihuana en la base de datos. Esto puede tardar unos segundos...");
		for(new i=0; i< MAX_PLANTAS; i++)
		{
			format(query, sizeof(query), "INSERT INTO plantas_marihuana (id) VALUES('%d');", i);
			mysql_query(MySQLCon, query, false);
		}
		format(temp_query, sizeof(temp_query), "[MySQL] Se crearon %d plantas de marihuana en la base de datos.", MAX_PLANTAS);
		printf("%s", temp_query);
	}

	cache_delete(R);
	query[0] = '\0';
	temp_query[0] = '\0';

	/////////////// Puertas dinamicas
	format(temp_query,sizeof(temp_query), "CREATE TABLE IF NOT EXISTS `puertas_dinamicas` (`index` int(32) NOT NULL AUTO_INCREMENT, `id` int(16) NOT NULL, `used` int(1) NOT NULL, `descr` VARCHAR(128) NOT NULL, `extX` float(16) NOT NULL, `extY` float(16) NOT NULL, `extZ` float(16) NOT NULL, `extA` float(16) NOT NULL, `extVW` int(6) NOT NULL, `extINT` int(5) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`intX` float(16) NOT NULL, `intY` float(16) NOT NULL, `intZ` float(16) NOT NULL, `intA` float(16) NOT NULL, `intVW` int(5) NOT NULL, `intINT` int(5) NOT NULL, `nivelVIP` int(2) NOT NULL, `facc` int(6) NOT NULL, `fam` int(6) NOT NULL, PRIMARY KEY (`index`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	strcat(query, temp_query);

	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	rows=0;

	mysql_format(MySQLCon, query, sizeof(query), "SELECT * FROM puertas_dinamicas;");
	R = mysql_query(MySQLCon, query, true);
	cache_get_row_count(rows);

	if(rows == 0)
	{
		printf("[MySQL] Creando puertas dinamicas en la base de datos. Esto puede tardar unos segundos...");
		for(new i=0; i< MAX_PUERTAS; i++)
		{
			format(query, sizeof(query), "INSERT INTO puertas_dinamicas (id) VALUES('%d');", i);
			mysql_query(MySQLCon, query, false);
		}
		format(temp_query, sizeof(temp_query), "[MySQL] Se crearon %d puertas dinamicas en la base de datos.", MAX_PUERTAS);
		printf("%s", temp_query);
	}

	cache_delete(R);
	query[0] = '\0';
	temp_query[0] = '\0';


	////////////////// Casas
	format(temp_query,sizeof(temp_query), "CREATE TABLE IF NOT EXISTS `casas` (`index` int(32) NOT NULL AUTO_INCREMENT, `id` int(8) NOT NULL, `nombre` VARCHAR(64) NOT NULL, `precio` int(16) NOT NULL, `dinero` int(16) NOT NULL, `seguro` int(1) NOT NULL, `comprada` int(1) NOT NULL, `owner` VARCHAR(32) NOT NULL, `vendedor` VARCHAR(32) NOT NULL, `tipo` int(3) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`rentable` int(1) NOT NULL, `valorRenta` int(16) NOT NULL, `extX` float(16) NOT NULL, `extY` float(16) NOT NULL, `extZ` float(16) NOT NULL, `extA` float(16) NOT NULL, `intX` float(16) NOT NULL, `intY` float(16) NOT NULL, `intZ` float(16) NOT NULL, `intA` float(16) NOT NULL, `cInt` int(10) NOT NULL, `cVW` int(10) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`borrado` int(1) NOT NULL, `interior` int(10) NOT NULL, `virtualworld` int(10) NOT NULL, `armPosX` float(16) NOT NULL, `armPosY` float(16) NOT NULL, `armPosZ` float(16) NOT NULL, `arm_1` int(10) NOT NULL, `arm_2` int(10) NOT NULL, `arm_3` int(10) NOT NULL, `arm_4` int(10) NOT NULL,");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`arm_5` int(10) NOT NULL, `arm_6` int(10) NOT NULL, `arm_7` int(10) NOT NULL, `arm_8` int(10) NOT NULL, `arm_9` int(10) NOT NULL, `arm_10` int(10) NOT NULL, `arm_11` int(10) NOT NULL, `arm_12` int(10) NOT NULL, `arm_13` int(10) NOT NULL, `arm_14` int(10) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`arm_15` int(10) NOT NULL, `arm_1_cant` int(32) NOT NULL, `arm_2_cant` int(32) NOT NULL, `arm_3_cant` int(32) NOT NULL, `arm_4_cant` int(32) NOT NULL, `arm_5_cant` int(32) NOT NULL, `arm_6_cant` int(32) NOT NULL, `arm_7_cant` int(32) NOT NULL, `arm_8_cant` int(32) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`arm_9_cant` int(32) NOT NULL, `arm_10_cant` int(32) NOT NULL, `arm_11_cant` int(32) NOT NULL, `arm_12_cant` int(32) NOT NULL, `arm_13_cant` int(32) NOT NULL, `arm_14_cant` int(32) NOT NULL, `arm_15_cant` int(32) NOT NULL, ");
	strcat(query, temp_query);

	for(new i=0; i<MAX_MUEBLES_C ; i++)
	{
		format(temp_query,sizeof(temp_query), "`model_%d` int(5) NOT NULL, `pX_%d` float(16) NOT NULL, `pY_%d` float(16) NOT NULL, `pZ_%d` float(16) NOT NULL, `rX_%d` float(16) NOT NULL, `rY_%d` float(16) NOT NULL, `rZ_%d` float(16) NOT NULL, ", i,i,i,i,i,i,i);
		strcat(query, temp_query);
	}

	format(temp_query,sizeof(temp_query), "PRIMARY KEY (`index`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	strcat(query, temp_query);

	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	////////////////// Negocios
	format(temp_query,sizeof(temp_query), "CREATE TABLE IF NOT EXISTS `negocios` (`index` int(32) NOT NULL AUTO_INCREMENT, `id` int(8) NOT NULL, `nombre` VARCHAR(64) NOT NULL, `precio` int(16) NOT NULL, `dinero` int(16) NOT NULL, `seguro` int(1) NOT NULL, `comprado` int(1) NOT NULL, `owner` VARCHAR(32) NOT NULL, `vendedor` VARCHAR(32) NOT NULL, `productos` int(16) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`tipo` int(1) NOT NULL, `icono` int(16) NOT NULL, `extX` float(16) NOT NULL, `extY` float(16) NOT NULL, `extZ` float(16) NOT NULL, `extR` float(16) NOT NULL, `intX` float(16) NOT NULL, `intY` float(16) NOT NULL, `intZ` float(16) NOT NULL, `intR` float(16) NOT NULL, `nInt` int(10) NOT NULL, `nVW` int(10) NOT NULL, `borrado` int(1) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`cuotas` int(5) NOT NULL, `pedido` int(5) NOT NULL, `enLlamas` int(1) NOT NULL, `enPedido` int(1) NOT NULL, `arm_1` int(10) NOT NULL, `arm_2` int(10) NOT NULL, `arm_3` int(10) NOT NULL, `arm_4` int(10) NOT NULL,");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`arm_5` int(10) NOT NULL, `arm_6` int(10) NOT NULL, `arm_7` int(10) NOT NULL, `arm_8` int(10) NOT NULL, `arm_9` int(10) NOT NULL, `arm_10` int(10) NOT NULL, `arm_11` int(10) NOT NULL, `arm_12` int(10) NOT NULL, `arm_13` int(10) NOT NULL, `arm_14` int(10) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`arm_15` int(10) NOT NULL, `arm_1_cant` int(32) NOT NULL, `arm_2_cant` int(32) NOT NULL, `arm_3_cant` int(32) NOT NULL, `arm_4_cant` int(32) NOT NULL, `arm_5_cant` int(32) NOT NULL, `arm_6_cant` int(32) NOT NULL, `arm_7_cant` int(32) NOT NULL, `arm_8_cant` int(32) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`arm_9_cant` int(32) NOT NULL, `arm_10_cant` int(32) NOT NULL, `arm_11_cant` int(32) NOT NULL, `arm_12_cant` int(32) NOT NULL, `arm_13_cant` int(32) NOT NULL, `arm_14_cant` int(32) NOT NULL, `arm_15_cant` int(32) NOT NULL, ");
	strcat(query, temp_query);

	for(new i=0; i<MAX_MUEBLES_N ; i++)
	{
		format(temp_query,sizeof(temp_query), "`model_%d` int(5) NOT NULL, `pX_%d` float(16) NOT NULL, `pY_%d` float(16) NOT NULL, `pZ_%d` float(16) NOT NULL, `rX_%d` float(16) NOT NULL, `rY_%d` float(16) NOT NULL, `rZ_%d` float(16) NOT NULL, ", i,i,i,i,i,i,i);
		strcat(query, temp_query);
	}

	format(temp_query,sizeof(temp_query), "PRIMARY KEY (`index`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	strcat(query, temp_query);

	mysql_query(MySQLCon, query, false);
	query[0] = '\0';


	////////////////// Vehiculos
	format(temp_query,sizeof(temp_query), "CREATE TABLE IF NOT EXISTS `vehiculos` (`index` int(32) NOT NULL AUTO_INCREMENT, `id` int(8) NOT NULL, `owner` VARCHAR(32) NOT NULL, `llave` int(10) NOT NULL, `modelo` int(16) NOT NULL, `vida` float(16) NOT NULL, `posX` float(16) NOT NULL, `posY` float(16) NOT NULL, `posZ` float(16) NOT NULL, `posR` float(16) NOT NULL,");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`interior` int(10) NOT NULL, `virtualworld` int(10) NOT NULL, `precio` int(16) NOT NULL, `g_1` int(10) NOT NULL, `g_2` int(10) NOT NULL, `g_3` int(10) NOT NULL, `g_1_c` int(10) NOT NULL, `g_2_c` int(10) NOT NULL, `g_3_c` int(10) NOT NULL, `max_maletero` int(4) NOT NULL, `seguro` int(1) NOT NULL, `useguro` int(1) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`paintJob` int(4) NOT NULL, `color_1` int(5) NOT NULL, `color_2` int(5) NOT NULL, `stereo` int(2) NOT NULL, `neon` int(2) NOT NULL, `gasolina` int(10) NOT NULL, `enDeposito` int(2) NOT NULL, `multa` int(16) NOT NULL, `danioSuperficie` int(5) NOT NULL, `danioPuertas` int(5) NOT NULL, `danioRuedas` int(5) NOT NULL,");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), "`guantera` int(5) NOT NULL, `spawned` int(1) NOT NULL, `borrado` int(1) NOT NULL, ");
	strcat(query, temp_query);

	for(new i=0; i<15 ; i++)
	{
		format(temp_query,sizeof(temp_query), "mal_%d int(5) NOT NULL, mal_%d_cant int(16) NOT NULL, ", i+1, i+1);
		strcat(query, temp_query);
	}

	for(new i=0; i<MAX_MODVEHICULOS ; i++)
	{
		format(temp_query,sizeof(temp_query), "mod_%d int(5) NOT NULL, ", i+1);
		strcat(query, temp_query);
	}

	format(temp_query,sizeof(temp_query), "PRIMARY KEY (`index`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	strcat(query, temp_query);

	mysql_query(MySQLCon, query, false);
	query[0] = '\0';


	/////////////////// Concesionarias
	format(temp_query,sizeof(temp_query), "CREATE TABLE IF NOT EXISTS `concesionarias` (`index` int(32) NOT NULL AUTO_INCREMENT, `id` int(3) NOT NULL, `owner` VARCHAR(32) NOT NULL, `vendedor` VARCHAR(32) NOT NULL, `nombre` VARCHAR(64), `dinero` int(16) NOT NULL, `tipo` int(2) NOT NULL, `precio` int(10) NOT NULL, `icono` int(8) NOT NULL, `comprada` int(1) NOT NULL, `borrado` int(1) NOT NULL, `enVenta` int(1) NOT NULL, ");
	strcat(query, temp_query);

	for(new i=0 ; i<MAX_MODELOS_CONCE; i++)
	{
		format(temp_query, sizeof(temp_query), "v_%d int(4) NOT NULL, v_%d_s int(10) NOT NULL, v_%d_p int(10) NOT NULL, ", i+1, i+1, i+1);
		strcat(query, temp_query);
	}

	format(temp_query, sizeof(temp_query), "`posX` float(16) NOT NULL, `posY` float(16) NOT NULL, `posZ` float(16) NOT NULL, `posR` float(16) NOT NULL, `posXsp` float(16) NOT NULL, `posYsp` float(16) NOT NULL, `posZsp` float(16) NOT NULL, `posRsp` float(16) NOT NULL,  PRIMARY KEY (`index`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	strcat(query, temp_query);

	mysql_query(MySQLCon, query, false);

	query[0] = '\0';

	/////////////////// ATM's
	format(query,sizeof(query), "CREATE TABLE IF NOT EXISTS `atms` (`index` int(32) NOT NULL AUTO_INCREMENT, `id` int(3) NOT NULL, `posX` float(16) NOT NULL, `posY` float(16) NOT NULL, `posZ` float(16) NOT NULL, `rotX` float(16) NOT NULL, `rotY` float(16) NOT NULL, `rotZ` float(16) NOT NULL, `dinero` int(32) NOT NULL, `objeto` int(6) NOT NULL, `borrado` int(1) NOT NULL, PRIMARY KEY (`index`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	mysql_query(MySQLCon, query, false);

	query[0] = '\0';

	/////////////////// Telefonos publicos
	format(query,sizeof(query), "CREATE TABLE IF NOT EXISTS `tel_publicos` (`index` int(32) NOT NULL AUTO_INCREMENT, `id` int(3) NOT NULL, `borrado` int(1) NOT NULL, `posX` float(16) NOT NULL, `posY` float(16) NOT NULL, `posZ` float(16) NOT NULL, `rotX` float(16) NOT NULL, `rotY` float(16) NOT NULL, `rotZ` float(16) NOT NULL, PRIMARY KEY (`index`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	mysql_query(MySQLCon, query, false);

	query[0] = '\0';

	////////////////// Graffitis
	format(temp_query,sizeof(temp_query), "CREATE TABLE IF NOT EXISTS `graffitis` (`index` int(32) NOT NULL AUTO_INCREMENT, `id` int(8) NOT NULL, `owner` VARCHAR(32) NOT NULL, `texto` VARCHAR(51) NOT NULL, `font` int(10) NOT NULL, `color` int(10) NOT NULL, `size` float(10) NOT NULL, `posX` float(16) NOT NULL, `posY` float(16) NOT NULL, `posZ` float(16) NOT NULL, `rotX` float(16) NOT NULL,");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), " `rotY` float(16) NOT NULL, `rotZ` float(16) NOT NULL, `interior` int(10) NOT NULL, `virtualworld` int(10) NOT NULL, `borrado` int(1) NOT NULL, PRIMARY KEY (`index`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	strcat(query, temp_query);

	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	////////////////// Objetos Admin
	format(temp_query,sizeof(temp_query), "CREATE TABLE IF NOT EXISTS `objetos_admin` (`index` int(32) NOT NULL AUTO_INCREMENT, `id` int(8) NOT NULL, `creador` VARCHAR(32) NOT NULL, `objeto` int(8) NOT NULL, `virtualworld` int(8) NOT NULL, `interior` int(8) NOT NULL, `posX` float(16) NOT NULL, `posY` float(16) NOT NULL, `posZ` float(16) NOT NULL, `rotX` float(16) NOT NULL,");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), " `rotY` float(16) NOT NULL, `rotZ` float(16) NOT NULL, `borrado` int(1) NOT NULL, PRIMARY KEY (`index`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	strcat(query, temp_query);

	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	////////////////// Garages
	format(temp_query,sizeof(temp_query), "CREATE TABLE IF NOT EXISTS `garages` (`index` int(32) NOT NULL AUTO_INCREMENT, `id` int(8) NOT NULL, `idCasa` int(10) NOT NULL, `interior` int(10) NOT NULL, `virtualworld` int(10) NOT NULL, `seguro` int(1) NOT NULL, `tipo` int(2) NOT NULL, `eX` float(16) NOT NULL, `eY` float(16) NOT NULL, `eZ` float(16) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), " `eA` float(16) NOT NULL, `eVX` float(16) NOT NULL, `eVY` float(16) NOT NULL, `iX` float(16) NOT NULL, `iY` float(16) NOT NULL, `iZ` float(16) NOT NULL, `iA` float(16) NOT NULL, `borrado` int(1) NOT NULL, ");
	strcat(query, temp_query);

	for(new i=0; i<MAX_MUEBLES_G ; i++)
	{
		format(temp_query,sizeof(temp_query), "`model_%d` int(5) NOT NULL, `pX_%d` float(16) NOT NULL, `pY_%d` float(16) NOT NULL, `pZ_%d` float(16) NOT NULL, `rX_%d` float(16) NOT NULL, `rY_%d` float(16) NOT NULL, `rZ_%d` float(16) NOT NULL, ", i,i,i,i,i,i,i);
		strcat(query, temp_query);
	}

	format(temp_query,sizeof(temp_query), "PRIMARY KEY (`index`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	strcat(query, temp_query);

	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	////////////////// Gasolineras
	format(query,sizeof(query), "CREATE TABLE IF NOT EXISTS `gasolineras` (`index` int(32) NOT NULL AUTO_INCREMENT, `id` int(3) NOT NULL, `posX` float(16) NOT NULL, `posY` float(16) NOT NULL, `posZ` float(16) NOT NULL, `negocio` int(8) NOT NULL, `borrado` int(1) NOT NULL, PRIMARY KEY (`index`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	mysql_query(MySQLCon, query, false);

	query[0] = '\0';

	////////////////// Stats generales del server
	format(temp_query,sizeof(temp_query), "CREATE TABLE IF NOT EXISTS `server_stats` (`index` int(32) NOT NULL AUTO_INCREMENT, `dineroGobierno` int(16) NOT NULL, `dineroLoteria` VARCHAR(32) NOT NULL, `valorImpuestos` int(8) NOT NULL, `sangreLSED` int(8) NOT NULL, `dobleExp` int(1) NOT NULL, `troncosDis` int(16) NOT NULL, `valorDNI` int(10) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query,sizeof(temp_query), " PRIMARY KEY (`index`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	strcat(query, temp_query);

	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	/////////////////// Empresas
	format(temp_query,sizeof(temp_query), "CREATE TABLE IF NOT EXISTS `empresas` (`index` int(32) NOT NULL AUTO_INCREMENT, `id` int(3) NOT NULL, `owner` VARCHAR(32) NOT NULL, `vendedor` VARCHAR(32) NOT NULL, `nombre` VARCHAR(64), `dinero` int(16) NOT NULL, `tipo` int(2) NOT NULL, `precio` int(10) NOT NULL, `comprada` int(1) NOT NULL, `borrado` int(1) NOT NULL, `seguro` int(1) NOT NULL, `miembros` int(5) NOT NULL, ");
	strcat(query, temp_query);
	format(temp_query, sizeof(temp_query), "`interior` int(10) NOT NULL, `espacio` int(3) NOT NULL, `enVenta` int(1) NOT NULL, `eX` float(16) NOT NULL, `eY` float(16) NOT NULL, `eZ` float(16) NOT NULL, `eR` float(16) NOT NULL, `eXv` float(16) NOT NULL, `eYv` float(16) NOT NULL, `iX` float(16) NOT NULL, `iY` float(16) NOT NULL, `iZ` float(16) NOT NULL, `iR` float(16) NOT NULL, ");
	strcat(query, temp_query);

	for(new i=0 ; i<MAX_COCHES_EMP; i++) // agregar muebles
	{
		format(temp_query, sizeof(temp_query), "`v_%d_idM` int(4) NOT NULL, `v_%d_hp` float(16) NOT NULL, `v_%d_pX` float(16) NOT NULL, `v_%d_pY` float(16) NOT NULL, `v_%d_pZ` float(16) NOT NULL, `v_%d_pR` float(16) NOT NULL, `v_%d_price` float(16) NOT NULL, `v_%d_c1` int(5) NOT NULL, `v_%d_c2` int(5) NOT NULL, `v_%d_gas` int(16) NOT NULL, `v_%d_dSup` int(10) NOT NULL, ",i+1,i+1,i+1,i+1,i+1,i+1,i+1,i+1,i+1,i+1,i+1);
		strcat(query, temp_query);
		format(temp_query, sizeof(temp_query), "`v_%d_dPu` int(10) NOT NULL, `v_%d_dLu` int(10) NOT NULL, `v_%d_dRu` int(10) NOT NULL, `v_%d_vw` int(10) NOT NULL, `v_%d_int` int(10) NOT NULL, ",i+1,i+1,i+1,i+1,i+1);
		strcat(query, temp_query);

		for(new j=0; j<15; j++)
		{
			format(temp_query, sizeof(temp_query), "`v_%d_m_%d` int(4) NOT NULL, `v_%d_m_c_%d` int(16) NOT NULL, ",i+1,j+1,i+1,j+1);
			strcat(query, temp_query);
		}
	}

	for(new i=0; i<MAX_MUEBLES_E ; i++)
	{
		format(temp_query,sizeof(temp_query), "`model_%d` int(5) NOT NULL, `pX_%d` float(16) NOT NULL, `pY_%d` float(16) NOT NULL, `pZ_%d` float(16) NOT NULL, `rX_%d` float(16) NOT NULL, `rY_%d` float(16) NOT NULL, `rZ_%d` float(16) NOT NULL, ", i,i,i,i,i,i,i);
		strcat(query, temp_query);
	}

	format(temp_query, sizeof(temp_query), "PRIMARY KEY (`index`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	strcat(query, temp_query);

	mysql_query(MySQLCon, query, false);

	query[0] = '\0';

	//////////////////// Muebles empresas
	/*format(temp_query,sizeof(temp_query), "CREATE TABLE IF NOT EXISTS `muebles_empresas` (`index` int(32) NOT NULL AUTO_INCREMENT, `id_mue` int(3) NOT NULL, `id_emp` int(16) NOT NULL, ");
	strcat(query, temp_query);

	for(new i=0; i<MAX_MUEBLES_E ; i++)
	{
		format(temp_query,sizeof(temp_query), "`model_%d` int(5) NOT NULL, `pX_%d` float(16) NOT NULL, `pY_%d` float(16) NOT NULL, `pZ_%d` float(16) NOT NULL, `rX_%d` float(16) NOT NULL, `rY_%d` float(16) NOT NULL, `rZ_%d` float(16) NOT NULL, ", i,i,i,i,i,i,i);
		strcat(query, temp_query);
	}

	format(temp_query, sizeof(temp_query), "PRIMARY KEY (`index`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	strcat(query, temp_query);

	mysql_query(MySQLCon, query, false);

	query[0] = '\0';*/

	// *************************************************************************************************************************** //



	// *****************************************************  DRCMD / DACP  ***************************************************** //

	format(query,sizeof(query), "CREATE TABLE IF NOT EXISTS `comandos_remotos` (`id_unica` int(32) NOT NULL AUTO_INCREMENT, `user` VARCHAR(32) NOT NULL, `idComando` int(2) NOT NULL, `idDestino` int(2) NOT NULL, `razon` VARCHAR(128) NOT NULL, PRIMARY KEY (`id_unica`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	format(query,sizeof(query), "CREATE TABLE IF NOT EXISTS `rcmd_auth` (`id_unica` int(32) NOT NULL AUTO_INCREMENT, `user` VARCHAR(32) NOT NULL, `logged` int(2) NOT NULL, PRIMARY KEY (`id_unica`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	format(query,sizeof(query), "CREATE TABLE IF NOT EXISTS `users_online` (`id_unica` int(32) NOT NULL AUTO_INCREMENT,`nick` VARCHAR(32) NOT NULL, `idActual` int(3) NOT NULL, `ip` VARCHAR(20) NOT NULL, PRIMARY KEY (`id_unica`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	// *************************************************************************************************************************** //



	// ***************************************************** TABLAS DE BANS ***************************************************** //

	format(query,sizeof(query), "CREATE TABLE IF NOT EXISTS `ipban` (`admin` VARCHAR(32) NOT NULL, `user` VARCHAR(32) NOT NULL, `razon` VARCHAR(32) NOT NULL, `ticket` VARCHAR(64) NOT NULL, `date` TIMESTAMP DEFAULT CURRENT_TIMESTAMP, `ip` VARCHAR(17), PRIMARY KEY (`admin`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	format(query,sizeof(query), "CREATE TABLE IF NOT EXISTS `bantmp` (`id_unica` int(32) NOT NULL AUTO_INCREMENT, `admin` VARCHAR(32) NOT NULL, `user` VARCHAR(32) NOT NULL, `razon` VARCHAR(32) NOT NULL, `fecha` VARCHAR(32) NOT NULL, `segundos` int(11), `ticket` VARCHAR(64) NOT NULL, PRIMARY KEY (`id_unica`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	format(query,sizeof(query), "CREATE TABLE IF NOT EXISTS `bans` (`id_unica` int(32) NOT NULL AUTO_INCREMENT,`user` VARCHAR(32) NOT NULL, `admin` VARCHAR(32) NOT NULL,`reason` VARCHAR(256) NOT NULL, `coords` VARCHAR(256) NOT NULL ,`ticket` VARCHAR(64) NOT NULL, `IP` VARCHAR(32) NOT NULL, `fecha` VARCHAR(32) NOT NULL, `hora` VARCHAR(32) NOT NULL, `status` int(3) NOT NULL, PRIMARY KEY (`id_unica`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	// ************************************************************************************************************************* //


	// ***************************************************** TABLAS DE BANCOS ************************************************* //

	format(query,sizeof(query), "CREATE TABLE IF NOT EXISTS `cuentas_banco` (`id_unica` int(32) NOT NULL AUTO_INCREMENT, `numero_cuenta` int(16) NOT NULL, `pin` VARCHAR(128) NOT NULL, `owner` VARCHAR(32), `dni` int(16) NOT NULL, `monto` int(32) NOT NULL, `numAccUser` int(2) NOT NULL, `ultimo_ingreso` VARCHAR(32) NOT NULL, PRIMARY KEY (`id_unica`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	format(query,sizeof(query), "CREATE TABLE IF NOT EXISTS `log_bank` (`id_unica` int(64) NOT NULL AUTO_INCREMENT, `nick` VARCHAR(32) NOT NULL, `event` VARCHAR(128) NOT NULL, `numero_cuenta` int(8) NOT NULL, `date` VARCHAR(64) NOT NULL, PRIMARY KEY (`id_unica`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	// ************************************************************************************************************************* //

	// ***************************************************** TABLAS CACHÉ  ***************************************************** //

	format(query,sizeof(query), "CREATE TABLE IF NOT EXISTS `cache_banklogin` (`id_unica` int(5) NOT NULL AUTO_INCREMENT, `userid` int(4) NOT NULL, `numero_cuenta` int(8) NOT NULL, `temp_pass` VARCHAR(128), `cuentaDestino` int(8) NOT NULL, PRIMARY KEY (`id_unica`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	mysql_query(MySQLCon, query, false);
	query[0] = '\0';
	
	format(query,sizeof(query), "CREATE TABLE IF NOT EXISTS `cache_banktransfer` (`id_unica` int(5) NOT NULL AUTO_INCREMENT, `userid` int(4) NOT NULL, `cuenta_origen` int(8) NOT NULL, `monto_origen` int(32) NOT NULL, `cuenta_destino` int(8) NOT NULL, `monto_destino` int(32) NOT NULL, PRIMARY KEY (`id_unica`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	format(query,sizeof(query), "CREATE TABLE IF NOT EXISTS `cache_codigo` (`id_unica` int(5) NOT NULL AUTO_INCREMENT, `userid` int(4) NOT NULL, `nick` VARCHAR(32) NOT NULL, `codigo` VARCHAR(32) NOT NULL, PRIMARY KEY (`id_unica`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	format(query,sizeof(query), "CREATE TABLE IF NOT EXISTS `cache_acciones` (`id_unica` int(5) NOT NULL AUTO_INCREMENT, `userid` int(4) NOT NULL, `idAccion` int(4) NOT NULL, PRIMARY KEY (`id_unica`)) ENGINE=InnoDB DEFAULT CHARSET=latin1;");
	mysql_query(MySQLCon, query, false);
	query[0] = '\0';

	// ************************************************************************************************************************* //

	return 1;

}